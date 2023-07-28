class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n=nums.size();

        vector<int>ans;

        int num1=INT_MIN;
        int num2=INT_MIN;

        int count1=0;
        int count2=0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]==num1)
            {
                count1++;
            }
            else if(nums[i]==num2)
            {
                count2++;
            }
            else if(count1==0)
            {
                num1=nums[i];
                count1=1;
            }
            else if(count2==0)
            {
                num2=nums[i];
                count2=1;
            }
            else
            {
                count1--;
                count2--;
            }
        }

        int c1=0;
        int c2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==num1) c1++;
            if(nums[i]==num2) c2++;
        }

        if(c1>n/3)
        {
            ans.push_back(num1);
        }
        if(c2>n/3)
        {
            ans.push_back(num2);
        }

        return ans;
    }
};
