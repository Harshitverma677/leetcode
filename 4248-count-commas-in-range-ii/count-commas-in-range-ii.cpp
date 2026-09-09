class Solution {
public:
    long long countCommas(long long n) {
       long long sum=0;
       while(n>=1000){
        if(n==pow(10,15)) sum+=5,n=pow(10,15)-1;
        if(n>=pow(10,12)) sum+=4*1LL*(n-pow(10,12)+1),n=pow(10,12)-1;
        if(n>=pow(10,9)) sum+=3*1LL*(n-pow(10,9)+1),n=pow(10,9)-1;
        if(n>=pow(10,6)) sum+=2*1LL*(n-pow(10,6)+1),n=pow(10,6)-1;
        if(n>=pow(10,3)) sum+=(n-pow(10,3)+1),n=pow(10,3)-1;
       }
       return sum;
    }
};