class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> result;
        int root = sqrt(area);
        int L;
        if (root * root == area) {
        	L = root;
        }
      	else {
      		L = root + 1;
      	}
      	
        for (int i = L; i <= area; i++)
        {
        	if (area%i == 0) 
        	{
        		result.push_back(i);
        		result.push_back(area/i);
        		break;
        	}
        }
        return result;
    }
};