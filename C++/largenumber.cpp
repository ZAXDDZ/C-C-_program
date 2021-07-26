#include <bits/stdc++.h>

using namespace std;


int main(){
	string formula;
	string op;
    vector<int>number1;
    vector<int>number2;


	getline(cin, op);
    while(op == "+"){
        while(!number1.empty()){
                number1.pop_back();
        }
        while(!number2.empty()){
                number2.pop_back();
        }

        getline(cin, formula);
        if(formula == "-1"){
            break;
        }
        for(int place = 0; place <= formula.back(); place++){
            if(formula[place] == '+'){
                if(formula[place-2] <= 57 || formula[place-2] >= 48){
                    for(int counter1 = place-2; counter1 >= 0; counter1--){
                        number1.push_back(int(formula[counter1])-48);
                    }
                }
                if(formula[place+2] <= 57 || formula[place+2] >= 48){
                    for(int counter2 = formula.size() - 1; counter2 >= place+2; counter2--){
                        number2.push_back(int(formula[counter2])-48);
                    }
                }
            }
        }


	int carry = 0;

	if(number1.size() >= number2.size()){
		for(int i = number2.size(); i <= number1.size()-1; i++){
			number2[i] = 0;
		}
		for(int i = 0; i <= number1.size() - 1; i++){
		number1[i] = number1[i] + number2[i];
		if(number1[i] >= 10){
			carry = number1[i] / 10;
			number1[i] = number1[i] % 10;
			number1[i+1] += carry;
		}
		}
		for(int k = number1.size() - 1; k >= 0; k--){
        printf("%d", number1[k]);
		}
		cout << endl;
	}



	if(number2.size() > number1.size()){
		for(int i = number1.size(); i <= number2.size()-1; i++){
			number1[i] = 0;
		}
		for(int i = 0; i <= number2.size() - 1; i++){
		number2[i] = number1[i] + number2[i];
		if(number2[i] >= 10){
			carry = number2[i] / 10;
			number2[i] = number2[i] % 10;
			number2[i+1] += carry;
		}
		}

		for(int k = number2.size() - 1; k >= 0; k--){
        printf("%d", number2[k]);
		}
		cout << endl;
        }
    }





    while(op == "-"){
        while(!number1.empty()){
                number1.pop_back();
        }
        while(!number2.empty()){
                number2.pop_back();
        }

        getline(cin, formula);
	if(formula == "-1"){
		break;
	}
	for(int place = 0; place <= formula.back(); place++){
        if(formula[place] == '-'){
            if(formula[place-2] <= 57 || formula[place-2] >= 48){
                for(int counter1 = place-2; counter1 >= 0; counter1--){
                    number1.push_back(int(formula[counter1])-48);
                }
            }
            if(formula[place+2] <= 57 || formula[place+2] >= 48){
                for(int counter2 = formula.size() - 1; counter2 >= place+2; counter2--){
                    number2.push_back(int(formula[counter2])-48);
                }
            }
        }
    }



    int carry = 0;


		for(int j = number2.size(); j <= number1.size()-1; j++){
			number2[j] = 0;
		}
		for(int j = 0; j <= number1.size()-1; j++){
            if(number1[j] < number2[j]){
                carry = 10;
                number1[j+1] -= 1;
                number1[j] = number1[j] + carry - number2[j];
            }
            else{
                number1[j] = number1[j] - number2[j];
            }
		}

        if(number1.size() >= number2.size()){
            for(int k = number1.size() - 1; k >= 0; k--){
                printf("%d", number1[k]);
            }
		cout << endl;
        }
        else{
            printf("%c", '-');
            for(int k = number1.size() - 1; k >= 0; k--){
                printf("%d", number1[k]);
            }
            cout << endl;
        }
    }



	return 0;
}
