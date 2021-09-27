#include <bits/stdc++.h>
#define MAX 100000

using namespace std;

int main(){
	int house, task_number;	//number of house, number of task
	cin >> house >> task_number;
	if(house >= 2 && house <= MAX && task_number >= 1 && task_number <= MAX){
		int task[task_number];	//save each task in which house
		for(int task_index = 0; task_index < task_number; ++task_index){
			cin >> task[task_index];
		} //input each task in which house

		int total = 0; //walk total distance
		total += task[0] - 1; //go to first task
		for(int count = 1; count < task_number; ++count){
			if(task[count-1] > task[count]){
				total += house - task[count-1];
				total += task[count];
			} //next task is behind present task
			else{
				total += task[count] - task[count-1];
			} //next task is front present task
		}

		cout << total << endl;
	}
	return 0;
}