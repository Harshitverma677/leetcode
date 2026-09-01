class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            while(n){
                int r=n%10;
                if(r==digit)cnt++;
                n=n/10;
            }
        }
        return cnt;
    }
};