class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        stack<int> stack;
        
        if(nums.size()==0) {
            return res;
        }
        
        for(int i=0; i<nums.size(); i++) {
            while(nums[i]) {
                int digit = nums[i]%10;
                stack.push(digit);
                nums[i] = nums[i]/10;
            }
            while(!stack.empty()) {
                res.push_back(stack.top());
                stack.pop();
            }
        }
        return res;
    }
};
