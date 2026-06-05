class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1) return strs[0];
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string sec=strs[n-1];
        string s="";
        for(int i=0;i<(min(first.size(),sec.size()));i++){
            if(first[i]==sec[i]){
                s+=first[i];
            }
            else return s;
        }
    return s;
        
    }
};
