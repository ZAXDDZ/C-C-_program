#include <bits/stdc++.h>

using namespace std;

void init(int number);

int record[100];

int main(){
	string str;	//input string
	while(getline(cin, str)){
		int counter = 0; //set to count present total 'Q'
		init(str.size()); //initall record
		
		for(int str_i = 0; str_i < str.size(); ++str_i){
			if(str[str_i] == 'Q'){
				++counter;
			} //count 'Q' when appearing
			record[str_i] = counter; //record present number of 'Q' in each bit
		}

		int sum = 0; //sum of "QAQ"
		for(int str_j = 0; str_j < str.size(); ++str_j){
			if(str[str_j] == 'A'){
				sum += record[str_j] * (record[str.size()-1] - record[str_j]);
			} //when appearing 'A', calculating number of 'Q' at 'A' left and number of 'Q' at 'A' right
		}

		cout << sum << endl;
	}
	return 0;
}

void init(int number){
	for(int i = 0; i < number; ++i){
		record[i] = 0;
	}
}