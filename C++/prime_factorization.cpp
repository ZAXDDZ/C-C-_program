#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int main(){
	vector<int> PRIME;
	vector<int> DISASSMBLE;

	int number;
	cin >> number;

	int counter;
	if(number > 0){
		for(int dividend = 2; dividend <= number; dividend++){
			counter = 0;
			for(int  divisor = 2; divisor < dividend; divisor++){
				
				if(dividend % divisor == 0){
					counter=1;
				}
			}
			if(counter != 1){
				PRIME.push_back(dividend);
			}
		}
	}

	int line = 1;
	
	cout << line << ".";
	for(int place1 = 0; place1 < PRIME.size(); place1++){
		cout << " " << PRIME[place1];
			if((place1 + 1) % 5 == 0){
				cout << endl;
				line++;
				cout << line << ".";
			}
			if(place1 == PRIME.size() - 1){
				cout << " " << endl;
			}
	}

	while(number != 1){
		for(int seq = 0; seq < PRIME.size(); seq++){
			while(number % PRIME[seq] == 0){
				number = number / PRIME[seq];
				DISASSMBLE.push_back(PRIME[seq]);
			}
		}
	}

	line++;
	cout << line << ". ";
	for(int place2 = 0; place2 < DISASSMBLE.size() - 1; place2++){
		cout << DISASSMBLE[place2] << "*";
	}
	cout << DISASSMBLE.back() << endl;

	return 0;
}