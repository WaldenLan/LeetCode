#include <iostream>
#include <vector>

using namespace std;

vector <int> countBits(int num)
{
	vector <int> result;

	for (int j = 0; j <= num; j++)
	{
		int tmp = j;
		int occur = 0;
		vector <int> base2;
		while (tmp != 0)
		{
			int rmd = tmp % 2;
			tmp = (tmp - rmd) / 2;
			base2.push_back(rmd);
		}
		for (unsigned int i = 0; i < base2.size(); i++)
		{
			if (base2[i] == 1) occur++;
		}
		result.push_back(occur);
	}

	return result;
}

int main(int argc, char const *argv[])
{
	vector <int> test;
	test = countBits(5);
	cout << "[";
	for (unsigned int i = 0; i < test.size() - 1; i++)
	{
		cout << test[i] << " ";
	}
	cout << test[test.size() - 1];
	cout << "]" << endl;
	return 0;
}
