class Solution {
#define ll long long
public:
    int nthUglyNumber(int n) {
        priority_queue<ll, vector<ll>, greater<ll> > q;
        q.push(1);
        ll pre = -1;
        while (1) {
            ll val = q.top();
            q.pop();
            while (val == pre) {
                val = q.top();
                q.pop();
            }
            pre = val;
            --n;
            if (n == 0) {
                return val;
            }
            q.push(val * 2);
            q.push(val * 3);
            q.push(val * 5);
        }
        return -1;
    }
};