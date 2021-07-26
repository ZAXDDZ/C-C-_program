#include <bits/stdc++.h>

using namespace std;

int main(){
	int roundcount;
	while(scanf("%d", &roundcount) != 0){
		if(roundcount <= 1 && roundcount >= 1000){
			break;
		}
		vector<long int> NUM;
		NUM.clear();
		for(int times = 1; times <= roundcount; times++){
			long int number;	
			cin >> number;
			NUM.push_back(number);
		}
	
		sort(NUM.begin(), NUM.end());

		long int cal = 0;
		for(int start = NUM.size() - 2; start >= 0; start--){
			cal = NUM.back();
			//cout << "start: " << start << endl;
			for(int place = start; place >= 0; place--){
				
				if(cal - NUM[place] >= 0){
					cal = cal - NUM[place];
					//cout << "cal: " << cal << endl;
				}
			}
			if(cal == 0){
				cout << NUM.back() << endl;
				break;
			}
		}

			if(cal != 0){
				cout << "no solution" << endl;
			}

	}
	return 0;
}