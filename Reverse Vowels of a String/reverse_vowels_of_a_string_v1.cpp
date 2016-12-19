class Solution {
public:
    int checkVowels(char x) {
        if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u') return 1;
        else return 0;
    }
    string reverseVowels(string s) {
        int len=s.length(), i, vowlen=0, b[4294967294];
        char a[4294967294];
        for (i=0;i<len;i++){
            if (checkVowels(s[i])==1) {
                vowlen++;
                b[vowlen-1]=i;
                a[vowlen-1]=s[i];
            }
        }
        for (i=0;i<vowlen;i++){
            s[b[i]]=a[vowlen-i-1];
        }
        return s;
    }
};
