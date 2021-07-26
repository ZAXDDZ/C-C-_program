#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

class Animal{

	private:
		string age;
		string weight;
		string gender;
		string foodcost;
	public:
		Animal(string &ag, string &wei, string &gen, string &food){ //Animal construtor
			age = ag;
			weight = wei;
			gender = gen;
			foodcost = food;
		}
		void setage(string &ag){	//set name value
			age = ag;
		}
		string getage() const{	//return name value
			return age;
		}
		void setweight(string &wei){	//set weight value
			weight = wei;
		}
		string getweight() const{	//return weight value
			return weight;
		}
		void setgender(string &gen){	// set gender value
			gender = gen;
		}
		string getgender() const{	//return gender value
			return gender;
		}
		void setfoodcost(string &food){	//set foodcost value
			foodcost = food;
		}
		string getfoodcost() const{	//return foodcost value
			return foodcost;
		}
};




class Elephant : public Animal{
	private:
		string name;
	public:
		Elephant(string &n, string &ag, string &wei, string &gen, string &food)	//Elephant construtor
			:Animal(ag, wei, gen, food){	//inheritance Animal
				name = n;
			}
		void setname(string &n){	//set name value
			name = n;
		}
		string getname() const{	//return name value
			return name;
		}
};


int main(){

	int countt;
	cin >> countt;
	cin.ignore();
	int totalcost = 0;

	for(int times = 1; times <= countt ; times++){	//do times of countt
		string information;	//set a string save information
		getline(cin, information);
		vector<string> elephant (5);
		int counter = 0;
		int i = 0;
		for(int place = 0; place < information.size(); place++){
			if(information[place] == ' '){
            	if(i == 1){
                  	elephant[i] = information.substr(place - counter, counter - 1);
               	}
               	else if(i == 2){
               		elephant[i] = information.substr(place - counter, counter - 2);
               	}
               	else{
               		elephant[i] = information.substr(place - counter, counter);
               	}
				i++;
				counter = 0;
			}

			if(information[place] != ' '){
				counter++;
			}
			if(place == information.size()-1){
				elephant[4] = information.substr(place - counter + 2);
				string total = information.substr(place - counter + 2);
				for(int j = 0; j < total.size(); j++){
					totalcost = (int(total[j]) - 48)*pow(10.0, float(total.size())-j-1) + totalcost;
				}
			}

		}
		cout << "name: " << elephant[0] << endl;
		cout << "year: " << elephant[1] << endl;
		cout << "weight: " << elephant[2] << endl;
		cout << "gender: " << elephant[3] << endl;
		cout << "cost: " << elephant[4] << endl;
		cout << endl;
	}
	cout << "total cost:" << totalcost << endl;
	return 0;
}
