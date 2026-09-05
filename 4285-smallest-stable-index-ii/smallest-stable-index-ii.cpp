class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int pre=INT_MIN,suf=INT_MAX;
        vector<int> premax;
        vector<int> sufmin;
        for(int i=0;i<nums.size();i++){
            pre=max(pre,nums[i]);
            premax.push_back(pre);
        }
        for(int i=nums.size()-1;i>=0;i--){
            suf=min(suf,nums[i]);
            sufmin.push_back(suf);
        }
        reverse(sufmin.begin(),sufmin.end());
        for(int i=0;i<nums.size();i++){
            if(premax[i]-sufmin[i]<=k) return i;
        }
        return -1;
    }
};