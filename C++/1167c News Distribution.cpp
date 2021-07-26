#include <bits/stdc++.h>
#define MAX 500000

using namespace std;

void init(int);	//initall parent[] with number of users
int find(int);	//find out the input number's parent
void merge(int, int);	//merge two number with one parent

int parent[MAX];	// save each connection's parent
int counter[MAX] = {0};	//save after merging the tree's rank

int main(){

	int user;
	int groups;
	cin >> user >> groups;
	if(user >= 1 && groups >= 1 && user <= 500000 && groups <= 500000){
		init(user);
		int people, head, other;	//people: every group number of person
									//head: first input person
									//other: other input people
		for(int group_index = 0; group_index < groups; ++group_index){
			cin >> people;
			if(people > 0){
				cin >> head;
			}//when people > 0 can input first person
			for(int people_in_group = 1; people_in_group < people; ++people_in_group){
				cin >> other;
				merge(head, other);
			}//then input other people and merge them
		}

		for(int array_index = 1; array_index <= user; ++array_index){
			head = find(array_index);
			++counter[head];
		}//find out every number tree's root when has connection will increase rank
		for(int array_index = 1; array_index <= user; ++array_index){
			head = find(array_index);
			if(array_index != user){
				cout << counter[head] << " ";
			}
			else{
				cout << counter[head] << endl;
			}
		}//find out every number tree's root print its rank(how many connection)
	}
	return 0;
}

void init(int number){
	for(int init_index = 1; init_index <= number; ++init_index){
		parent[init_index] = init_index;
	}
}

int find(int x){
	if(x == parent[x]){
		return x;
	}
	return parent[x] = find(parent[x]);
}

void merge(int x, int y){
	int parent_x = find(x);	//set to x's parent
	int parent_y = find(y);	//set to y's parent

	if(parent_x != parent_y){
		if(counter[parent_x] > counter[parent_y]){
			parent[parent_y] = parent_x;
		}//x's rank > y's rank, connect y to x
		else{
			parent[parent_x] = parent_y;	//x's rank > y's rank, connect x to y
			if(counter[parent_x] == counter[parent_y]){
				++counter[parent_x];
			}//when rank equal, increase rank
		}
	}
}