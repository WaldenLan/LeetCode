#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	vector<string>::size_type min_size;
	if (strs.size() == 0) return "";
	else if (strs.size() == 1) return strs[0];
	else min_size = strs[0].size();

	for (vector<string>::size_type i = 1; i < strs.size(); i++)
	{
		vector<string>::size_type tmp = strs[i].size();
		if (tmp < min_size) min_size = tmp;
	}

	if (min_size == 0) return "";

	int i = 0;
	while (true)
	{
		int xor_result = strs[0][i];
		int flag = 0;
		for (vector<string>::size_type j = 1; j < strs.size(); j++)
		{
			xor_result ^= strs[j][i];
			if (!((xor_result == 0 && (j+1)%2 == 0) || (xor_result == strs[0][i] && (j+1)%2 == 1)))
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1) break;
		if (++i == min_size) break;    			
	}
	return strs[0].substr(0, i);
}

int main(int argc, char const *argv[])
{
	vector<string> test;
	test.push_back("b");
	test.push_back("cb");
	test.push_back("cab");
	string result = longestCommonPrefix(test);
	cout << result << endl;
	return 0;
}