#include <iostream>
#include <stack>
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;


int calPoints(vector<string>& ops) {
	int result = 0;
	std::stack<int> pts;
	std::vector<string>::iterator it;
	for (it=ops.begin(); it!=ops.end(); it++) {
		std::stack<int>::size_type size = pts.size();
		if (*it == "+") {
			if (size == 0) {
				continue;
			} else if (size == 1) {
				pts.push(pts.top());
				result += pts.top();
			} else {
				int prev = pts.top();
				pts.pop();
				int prev_prev = pts.top();
				int round = prev + prev_prev;
				pts.push(prev);
				pts.push(round);
				result += round;
			}
		} else if (*it == "D") {
			if (size == 0) {
				continue;
			}
			int last_round = pts.top();
			int current_round = 2 * last_round;
			pts.push(current_round);
			result += current_round;
		} else if (*it == "C") {
			if (size == 0) {
				continue;
			}
			result -= pts.top();
			pts.pop();
		} else {
			int round = atoi(it->c_str());
			pts.push(round);
			result += round;
		}
	}

	return result;
}

int main(int argc, char const *argv[])
{
	std::vector<string> ops;
	ops.push_back("5");
	ops.push_back("-2");
	ops.push_back("4");
	ops.push_back("C");
	ops.push_back("D");
	ops.push_back("9");
	ops.push_back("+");
	ops.push_back("+");

	int result = calPoints(ops);
	cout << result << endl;

	return 0;
}
    