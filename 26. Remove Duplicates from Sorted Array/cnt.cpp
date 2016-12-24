#include "cnt.h"

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums;
    nums.push_back(1);
    // nums.push_back(1);
    // nums.push_back(2);
    int cnt = s.removeDuplicates(nums);
    cout << cnt << endl;
    cout << "------------" << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
    return 0;
}