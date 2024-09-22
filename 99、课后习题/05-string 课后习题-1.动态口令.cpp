class Solution {
public:
    string dynamicPassword(string password, int target) {
        return password.substr(target) + password.substr(0, target);
    }
};