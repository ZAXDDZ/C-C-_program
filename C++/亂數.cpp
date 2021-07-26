#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main(){
	int seed;
	seed = time(NULL);
	srand(seed);
	for(int num = 1; num <= 8; num++){
		cout << rand() << endl;
	}
	return 0;
}