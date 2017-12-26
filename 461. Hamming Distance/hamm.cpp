#include <iostream>
#include <cmath>

using namespace std;


int *max(int x, int y) {
	int *arr = new int[2];
	if (x > y) {
		arr[0] = x;
		arr[1] = y;
	} else {
		arr[0] = y;
		arr[1] = x;
	}
	return arr;
}


int hammingDistance(int x, int y) {
	int dist = 0;
	int *maximal = max(x, y);

	if (maximal[0] == 0) {
		return 0;
	}

	int size = log2(maximal[0]) + 1;

	int *b_encoded = new int[size];
	int larger = maximal[0];
	int smaller = maximal[1];
	int index = 0;
	while (larger != larger%2) {
		int remainder = larger%2;
		b_encoded[index++] = remainder;
		larger /= 2;
	}
	b_encoded[index++] = 1;

	int j = 0;
	while (smaller != smaller%2) {
		int remainder = smaller%2;
		if (remainder != b_encoded[j++]) {
			dist++;
		}
		smaller /= 2;
	}
	if (smaller == 1 && b_encoded[j++] != 1) {
		dist++;
	}

	while (j < size) {
		if (b_encoded[j++] != 0) {
			dist++;
		}
	}

	delete[] maximal;
	delete[] b_encoded;
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