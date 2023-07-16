class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //iterate from the head or first element
        int slow = nums[0];
        int fast = nums[0];

        //slow:one step , fast : 2 step

        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow!=fast);

        fast = nums[0];   //again intialise the fast to head

        //now iterate slow and fast only 1 step to meet

        while(slow!=fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};