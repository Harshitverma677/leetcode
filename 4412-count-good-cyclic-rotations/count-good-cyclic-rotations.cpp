class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        vector<int> temp=nums;
        temp.insert(temp.end(),nums.begin(),nums.end());
        long long total=0,sum=0;
        int n=nums.size()/2;
        for(int i=0;i<nums.size();i++) total+=nums[i];
        for(int i=0;i<n;i++) sum+=nums[i];

        int i=0,j=n-1,cnt=0;
        while(i<nums.size()){
            if(j-i+1==n){
                if(sum>total-sum) cnt++;
                sum=sum-temp[i];
                i++;
            }
            j++;
            sum+=temp[j];
        }
        return cnt;
    }
};