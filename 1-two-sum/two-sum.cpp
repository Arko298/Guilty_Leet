class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n,i,j;
        n=nums.size();
        for (i=0;i<n-1;i++)
        {
            for (j=i+1;j<n;j++)
            {
                if (nums[i]+nums[j]==target)
                    return {i,j};
            }
        }
        return {};
    }
};