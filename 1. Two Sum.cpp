class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        int sz=nums.size();
        for(int i=0;i<sz;i++)
        {
            mp[nums[i]]=i;
        }
        vector<int>sol;
        for(int i=0;i<sz;i++)
        {
            int x=nums[i];
            if(mp.find(target-x)!=mp.end() && mp.find(target-x)->second!=i)
            {
                sol.push_back(i);
                sol.push_back(mp.find(target-x)->second);
                break;
            }

        }
        return sol;
    }
};
