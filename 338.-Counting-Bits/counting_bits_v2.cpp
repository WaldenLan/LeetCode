#include <iostream>
#include <vector>

using namespace std;

vector <int> countBits(int num) {
	vector <int> result(num + 1, 0);
	unsigned int base_pow = 1, flag = 0;

	for (unsigned int i = 1; i < result.size(); i++)
	{
		if (i == base_pow)
		{
			base_pow *= 2;
			flag = 0;
		}
		result[i] = result[flag] + 1;
		flag++;
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
