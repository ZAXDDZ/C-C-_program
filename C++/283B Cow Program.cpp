#include <bits/stdc++.h>
#define MAX 200000

using namespace std;

void init(int n_number); //initall arr_number
void cal(int input_x, int input_y, int input_counter); //calculate x and y

int number; //the limit n and a1
int arr_number[MAX]; //array save a2, a3, a4...
int terminate_count = 0; //check time to stop (bad method) 

int main(){
	cin >> number;
	if(number >= 2 && number <= MAX){
		init(number);

		for(int input = 0; input < number-1; ++input){
			cin >> arr_number[input];
		} //input a2, a3, .. an

		int x = 1, y = 0, counter = 0;	//counter record the step
		for(int i = 1; i <= number-1; ++i){
			x = 1;
			y = 0;
			counter = 1; //initall x = 1, y = 0, counter = 0
			x += i;
			y += i;
			cal(x, y, counter);
		}
	}
	return 0;
}

void init(int n_number){
	for(int init_number = 0; init_number < n_number; ++init_number){
		arr_number[init_number] = 0;
	}
}

void cal(int input_x, int input_y, int input_counter){
	//cout << input_x << " " << input_y << endl;
	int a_x = input_x - 2;

	++input_counter;
	if(input_counter % 2 == 0){
		input_x -= arr_number[a_x];
	}
	else{
		input_x += arr_number[a_x];
	} //odd step x need plus, even step x need minus
	input_y += arr_number[a_x];

	//cout << input_x << " " << input_y << endl;
	if(input_x <= 0 || input_x > number){
		cout << input_y << endl;
	}
	else{
		++terminate_count;
		if(terminate_count > 500){
			cout << -1 << endl;
		}
		else{
			cal(input_x, input_y, input_counter);
		}
	}
}