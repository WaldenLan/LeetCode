#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int *a = new int;
	*a = 2;

	vector <int*> data;
	data.push_back(a); 

	delete a;
	return 0;
}