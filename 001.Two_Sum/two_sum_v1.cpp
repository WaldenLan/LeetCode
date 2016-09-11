#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		int flag = 0, result_1, result_2;
		for (unsigned int i = 0; i < nums.size(); i++)
		{
			for (unsigned int j = i + 1; j < nums.size(); j++)
			{
				int tmp = nums[i] + nums[j];
				if (tmp == target)
				{
					result_1 = (int) i;
					result_2 = (int) j;
					flag = 1;
				}
			}
			if (flag == 1)
			{
				break;
			}
		}
		vector <int> result;
		result.push_back(result_1);
		result.push_back(result_2);
		return result;
    }
};

int main()
{
	vector <int> nums;
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(4);
	int target = 6;
	Solution tmp;
	vector <int> result = tmp.twoSum(nums, target);
	for (unsigned int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}
	return 0;
}
