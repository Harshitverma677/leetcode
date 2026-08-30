class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size()<=2) return nums.size();
        int a=INT_MAX,b=INT_MIN;
        for(int i=0;i<nums.size();i++){
            a=min(a,nums[i]);
            b=max(b,nums[i]);
        }
        int cnt=0,front=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==a || nums[i]==b) cnt++;
            if(cnt==2){
                front=i+1;
                break;
            }
        }
        cnt=0;
        int back=-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==a || nums[i]==b) cnt++;
            if(cnt==2){
                back=nums.size()-i;
                break;
            }
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==a || nums[i]==b){
                sum+=(i+1);
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==a || nums[i]==b){
                sum+=(nums.size()-i);
                break;
            }
        }
        return min({front,back,sum});
    }
};