class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()<=2) return true;
        if(nums[0]<nums[nums.size()-1]){
            bool flag=0;
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]>nums[i+1]){
                    flag=1;
                    break;
                }
            }
            if(flag==0) return true;
            else return false;
        }
        else if(nums[0]>nums[nums.size()-1]){
            bool flag=0;
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]<nums[i+1]){
                    flag=1;
                    break;
                }
            }
            if(flag==0) return true;
            else return false;
        }
        else{
            bool flag=0;
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]!=nums[i+1]){
                    flag=1;
                    break;
                }
            }
            if(flag==0) return true;
            else return false;
        }
        return false;
    }
};