#include <bits/stdc++.h>

using namespace std;

class Animal{

	private:
		string age = {0};
		string weight = {0};
		string gender = {0};
		string foodcost = {0};
	public:
		Animal(string ag = {0}, string wei = {0}, string gen = {0}, string food = {0}){
			age = ag;
			weight = wei;
			gender = gen;
			foodcost = food;
		}
		void setage(const string &ag){
			age = ag;
		}
		string getage() const{
			return age;
		}
		void setweight(const string &wei){
			weight = wei;
		}
		string getweight() const{
			return weight;
		}
		void setgender(const string &gen){
			gender = gen;
		}
		string getgender() const{
			return gender;
		}
		void setfoodcost(const string &food){
			foodcost = food;
		}
		string getfoodcost() const{
			return foodcost;
		}
};




class Elephant : public Animal{
	private:
		string name = {0};
	public:
		Elephant(string n = {0}, string ag = {0}, string wei = {0}, string gen = {0}, string food = {0})
			:Animal(ag, wei, gen, food){
				name = n;
			}
		void setname(const string &n){
			name = n;
		}
		string getname() const{
			return name;
		}
};


int main(){

	Elephant information;
	string ename;
	string eage;
	string eweight;
	string egender;
	string ecost;

	int countt;
	cin >> countt;
	cin.ignore();

	int totalcost = 0;

	for(int times = 1; times <= countt ; times++){
		cin >> ename;
		cin >> eage;
		cin >> eweight;
		cin >> egender;
		cin >> ecost;

		eage.pop_back();
		
		for(int i = 1; i <= 2; i++){
			eweight.pop_back();
		}

		ecost.erase(ecost.begin());
		
		for(int j = 0; j < ecost.size(); j++){
			totalcost = (int(ecost[j]) - 48)*pow(10.0,(float(ecost.size()) - j - 1)) + totalcost;
		}
		

		information.setname(ename);
		information.setage(eage);
		information.setweight(eweight);
		information.setgender(egender);
		information.setfoodcost(ecost);

		cout << "name: " << information.getname() << endl;
		cout << "year: " << information.getage() << endl;
		cout << "weight: " << information.getweight() << endl;
		cout << "gender: " << information.getgender() << endl;
		cout << "cost: " << information.getfoodcost() << endl;
		cout << endl;
	}
	cout << "total cost:" << totalcost << endl;
	return 0;
}
