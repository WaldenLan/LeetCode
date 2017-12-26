#include <bitset>
#include <iostream>

using namespace std;


int hammingDistance(int x, int y) {
	bitset<32> _x(x);
	bitset<32> _y(y);

	int dist = 0;
	for (int i = 0; i < 32; i++) {
		if (_x[i] != _y[i]) {
			dist++;
		}
	}

	return dist;
}

int main(int argc, char const *argv[])
{
	int x = 1; 
	int y = 4;

	int dist = hammingDistance(x, y);

	cout << dist << endl;
	return 0;
}