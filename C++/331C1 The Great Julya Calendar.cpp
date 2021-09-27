#include <bits/stdc++.h>

using namespace std;

int findMax(int present_number, int presnet_max);

int main(){
	int number;
	cin >> number;
	int counter = 0;
	while(number > 0){
		int max = -1;
		max = findMax(number, max);
		number -= max;
		++counter;
	}
	cout << counter << endl;
	return 0;
}

int findMax(int present_number, int presnet_max){
	while(present_number >= 1){
		if(present_number % 10 > presnet_max){
			presnet_max = present_number % 10;
		}
		present_number = present_number / 10;
	}
	return presnet_max;
}