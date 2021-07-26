#include <bits/stdc++.h>

using namespace std;

int main(){
    int row, column;
    cin >> row;
    cin >> column;

    int counter = 0;
    if(row >= 3 && column >= 3 && row <= 50 && column <= 50){
        for(int row_index = 0; row_index < row; ++row_index){
            for(int column_index = 0; column_index < column; ++column_index){
            	if(row_index % 2 == 0){
            		cout << "*";
            	}
            	else{
            		if(counter % 2 == 0){
            			if(column_index == column - 1){
            				cout << "*";
            			}
            			else{
            				cout << ".";
            			}
            		}
            		else{
            			if(column_index == 0){
            				cout << "*";
            			}
            			else{
            				cout << ".";
            			}
            		}
            		++counter;
            	}
            }
            cout << endl;
        }
    }

    return 0;
}
