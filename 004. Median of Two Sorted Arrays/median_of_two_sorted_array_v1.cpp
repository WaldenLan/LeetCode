#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> mergeSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> result;
        unsigned int i = 0, j = 0;
        while (true)
        {
            if (i == nums1.size())
            {
                for (unsigned int k = j; k < nums2.size(); k++)
                {
                    result.push_back(nums2[k]);
                }
                break;
            }
            if (j == nums2.size())
            {
                for (unsigned int k = i; k < nums1.size(); k++)
                {
                    result.push_back(nums1[k]);
                }
                break;
            }
            if (nums1[i] <= nums2[j])
            {
                result.push_back(nums1[i]);
                ++i;
            }
            else
            {
                result.push_back(nums2[j]);
                ++j;
            }
        }
        return result;
    }

    double getMedian(vector<int>& num)
    {
        int size = num.size();
        if (size%2 == 1)
        {
            int index = (size - 1) / 2;
            return (double) num[index];
        }
        else 
        {
            int index = size / 2;
            return (double) (num[index - 1] + num[index]) / 2;
        }
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> result = mergeSortedArrays(nums1, nums2);
        return getMedian(result);        
    }
};

int main(int argc, char const *argv[])
{
    Solution res;
    vector <int> test1;
    test1.push_back(1);
    test1.push_back(2);

    vector <int> test2;
    test2.push_back(4);

    cout << res.findMedianSortedArrays(test1, test2) << endl;
    return 0;
}
