#include <bits/stdc++.h>
#define MAX 100000

using namespace std;

int main(){
	int number;	//number of walrus in queue
	cin >> number;
	if(number >= 2 && number <= MAX){
		int age[number];
		for(int age_input = 0; age_input < number; ++age_input){
			cin >> age[age_input];
		} //input all walrus' age

		int displease[number] = {0}; //save every degree of displease
		int min_number[number] = {-1}; //the farthest and younger age for every walrus
		for(int queue_i = 0; queue_i < number; ++queue_i){
			for(int queue_j = queue_i; queue_j < number; ++queue_j){
				if(age[queue_i] > age[queue_j]){
					min_number[queue_i] = queue_j;	
				}
			}
		} //find distance of farthest and younger from every walrus

		for(int queue_i = 0; queue_i < number; ++queue_i){
			if(min_number[queue_i] == 0){
				displease[queue_i] = -1;
			} //not find, set -1
			else{
				displease[queue_i] = min_number[queue_i] - queue_i - 1;
			} //find the place, set (the place - present place - 1) 
		}

		for(int output_index = 0; output_index < number; ++output_index){
			if(output_index == number-1){
				cout << displease[output_index] << endl;
			}
			else{
				cout << displease[output_index] << " ";
			}
		} //output all displease
	}
	
	return 0;
}