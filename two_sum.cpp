class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
      vector<int> t;
      for(int i=0;i<nums.size()-1;i++)
      {
        for(int j=i+1;j<nums.size();j++)
        {
           if(nums[i]+nums[j]==target)
           {
              t.push_back(i);
              t.push_back(j);
           }
        }
        if(t.size()==2)
            break;
     }
     return t;  
   }
};