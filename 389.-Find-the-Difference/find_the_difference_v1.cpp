#include <iostream>

using namespace std;

char findTheDifference(string s, string t) {
    for (int i = 0; i < s.length(); i++)
    {
        t.erase(t.find(s[i]), 1);
    }
    return t[0];
}


int main(int argc, char const *argv[])
{
    string s = "abcd", t = "abcde";
    cout << findTheDifference(s, t) << endl;
    return 0;
}
