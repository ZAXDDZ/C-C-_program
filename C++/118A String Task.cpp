#include <bits/stdc++.h>

using namespace std;

int main(){
	string input_string;
	string output_string;

	while(getline(cin, input_string)){
		for(int string_index = 0; string_index < input_string.length(); ++string_index){
			input_string[string_index] = tolower(input_string[string_index]);
			if(input_string[string_index] != 'a' &&
				input_string[string_index] != 'e' &&
				input_string[string_index] != 'i' &&
				input_string[string_index] != 'o' &&
				input_string[string_index] != 'u'){
				output_string.push_back(input_string[string_index]);
			}
		}

		for(int output_index = 0; output_index < output_string.length(); ++output_index){
			cout << "." << output_string[output_index];
		}
		cout << endl;
		output_string.clear();
	}

	return 0;
}