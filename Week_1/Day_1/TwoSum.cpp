class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int fidx=-1;
        int sidx=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target) {
                    fidx=i;
                    sidx=j;  
                    break;    
                }
            }
        }
    return {fidx,sidx};
    }
};
