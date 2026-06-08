class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'a']++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    Solution obj;
    string s = "leetcode";

    int result = obj.firstUniqChar(s);
    cout << result << endl;

    return 0;
}
