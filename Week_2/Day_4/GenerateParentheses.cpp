class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string curr;
        function<void(int,int)> backtrack = [&](int open, int close) {
            if (curr.size() == 2 * n) {
                res.push_back(curr);
                return;
            }
            if (open < n) {
                curr.push_back('(');
                backtrack(open + 1, close);
                curr.pop_back();
            }
            if (close < open) {
                curr.push_back(')');
                backtrack(open, close + 1);
                curr.pop_back();
            }
        };
        backtrack(0, 0);
        return res;
    }
};
