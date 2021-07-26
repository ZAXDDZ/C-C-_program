#include <bits/stdc++.h>

using namespace std;
#define MILLION 1000000

//operation1 = P1 <-> P2, P3 <-> P4, ..., P2n-1 <-> P2n
//operation2 = P1 <-> Pn+1, P2 <-> Pn+2, ..., Pn <-> P2n

int number;
map<vector<int>, int> permutation_map;	//record present premutation form(key) and is appeared(value)
int minimum_step = MILLION;
/*map<vector<int>,int>::iterator it;*/

void DFS(vector<int> table, int times);	//function DFS prototype

int main(){
	cin >> number;	//input a number
	vector<int> origin_table(2*number); //set a vector number*2 size
	for(int table_index = 0; table_index < 2*number; ++table_index){
		cin >> origin_table[table_index];
	}	//input number to vector block

	permutation_map[origin_table] = 1;	//record origin_table is appeared, 1 is true
	DFS(origin_table, 0);	//from origin_table with times = 0 to do DFS

	if(minimum_step == MILLION){
		cout << "-1" << endl;
	}//if minimum is still original
	else{
		cout << minimum_step << endl;
	}//if finding out true steps

	return 0;
}

void DFS(vector<int> table, int times){
	int flag = 1;	//record is ordered
	for(int is_sorted_index = 0; is_sorted_index < 2*number; ++is_sorted_index){
		if(table[is_sorted_index] != is_sorted_index+1){
			flag = 0;
			break;
		}
	}//check ordered

	if(flag && times < minimum_step){
		minimum_step = times;
	}//replace minimum_step value

	vector<int> operation_1_table;	//set new vector to store operation1 swapping result
	for(int operation_1_index = 0; operation_1_index < 2*number; operation_1_index = operation_1_index+2){
		operation_1_table.push_back(table[operation_1_index+1]);
		operation_1_table.push_back(table[operation_1_index]);
	}//swap with operation1
	if(!permutation_map.count(operation_1_table)){ //if map is not found this form
		permutation_map[operation_1_table]++; //mark this form appeared
		DFS(operation_1_table, times+1);
		permutation_map.erase(operation_1_table);//delete original form
		
		/*for (it=permutation_map.begin(); it!=permutation_map.end(); ++it)
    		cout << "1 " << it->second << '\n';*/
	}

	vector<int> operation_2_table;	//set new vector to store operation2 swapping result
	for(int operation_2_index = number; operation_2_index < 2*number; ++operation_2_index){
		operation_2_table.push_back(table[operation_2_index]);
	}
	for(int operation_2_index = 0; operation_2_index < number; ++operation_2_index){
		operation_2_table.push_back(table[operation_2_index]);
	}//swap with operation2
	if(!permutation_map.count(operation_2_table)){ //if map is not found this form
		permutation_map[operation_2_table]++;	//mark this form appeared
		DFS(operation_2_table, times+1);
		permutation_map.erase(operation_2_table);//delete original form
	}
}