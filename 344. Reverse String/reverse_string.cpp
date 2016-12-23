class Solution {
public:
    string reverseString(string s) {
        int len = s.length(), i;
        string s2 = s;
        for (i=0;i<len;i++){
            s2[i]=s[len-i-1];
        }
        return s2;
    }
};
