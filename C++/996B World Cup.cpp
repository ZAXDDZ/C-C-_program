#include <bits/stdc++.h>

using namespace std;

int ROUND_LINE(int[], int, int);

int main(){
	int line_number;
	cin >> line_number;
	if(line_number >= 2 && line_number <= 100000){
		int line_people[line_number];
		for(int input_index = 0; input_index < line_number; ++input_index){
			cin >> line_people[input_index];
		}//input how many people in every line

		int present_line = 0;	//set which line he line up
		int enter = ROUND_LINE(line_people, line_number, present_line);
		cout << enter << endl;
	}
	return 0;
}

int ROUND_LINE(int every_line_people[], int number_of_line, int now_line){
	int line_index;
	for(line_index = 0; line_index < number_of_line; ++line_index){
		if(every_line_people[line_index] > 0){
			--every_line_people[line_index];
		}
		else{
			every_line_people[line_index] = 0;
		}
	}//every line enter one person and when line is 0 people still be 0
	++now_line;	//move to next line

	for(line_index = 0; line_index < number_of_line; ++line_index){
		if(line_index == now_line % number_of_line && every_line_people[line_index] == 0){
			return line_index+1;
		}
	}//check he line in one line that nobody line only him
	
	ROUND_LINE(every_line_people, number_of_line, now_line);
}