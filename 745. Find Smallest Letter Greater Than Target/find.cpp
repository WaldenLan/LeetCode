class Solution {
public:
	char helper(char target, vector<char>& letters, int left, int right) {
		if (left == right) {
			return letters[left];
		}
		if (target < letters[(left+right)/2]) {
			return helper(target, letters, left, (left+right)/2);
		} else {
			return helper(target, letters, ((left+right)/2)+1, right);
		}
	}

    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<char>::size_type size = letters.size();
        if (target >= letters[size-1]) {
        	return letters[0];
        } else {
        	return helper(target, letters, 0, size - 1);
        }
    }
};
