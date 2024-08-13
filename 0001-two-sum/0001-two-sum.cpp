class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           vector<int> targets;
        vector<int> result;
        targets.push_back(target);
        for (int element : targets)
        {

            for (int i = 0; i < nums.size() - 1; i++)
            {
                for (int j = i + 1; j < nums.size(); j++)
                {
                    if (element == nums[i] + nums[j])
                    {    
                        result.push_back(i);
                        result.push_back(j);
                        
                         return result;

                        
                    }
                }
            }
        }
          return result;
    }
                
};