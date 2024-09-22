class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) {
            return "0";
        }
        string ans = "";
        stack<char> stk;
        if (num < 0) {
            num = -num;
            ans = "-";
        }
        while (num) {
            stk.push('0' + (num % 7));
            num /= 7;
        }
        while (!stk.empty()) {
            ans = ans + stk.top();
            stk.pop();
        }
        return ans;
    }
};