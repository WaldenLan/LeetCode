#include <iostream>
#include <vector>

using namespace std;

vector <int> countBits(int num) {
    vector <int> result;

	for (int i = 0; i <= num; i++)
	{
		int tmp = i;
		int occur = 0;
		while (tmp != 0)
		{
			int rmd = tmp % 2;
			tmp = (tmp - rmd) / 2;
			if (rmd == 1) occur++;
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
