#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int num,i,j,arr[1000],flag;
	cin >> num;
//	if (num >= 0){
		for (i=1; i<=num; i++){
			flag=1;
			while (i!=1){
                j=i%2;
				if(j==1){
					flag++;
					i=(i-(i%2))/2;
				}
				else if (j==0){
					i/=2;
				}
			}
			arr[i]=flag;
		}
//	}
	//else {
	//	cout << "Please input a valid number!" << endl;
	//}
	cout << "[0,";
	for (i=1;i<num;i++){
		cout << arr[i] << ",";
	}
	cout << arr[num] << "]";
	return 0;
}
