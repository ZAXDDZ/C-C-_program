#include <bits/stdc++.h>

using namespace std;

int row,column;		//set matrix size
char board[55][55];	//matrix of putting character
int visit[55][55];	//matrix of visitting recording
int flag = 0;		//check that is finding the cycle
int direction[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};	//move four direction in matrix

void DFS(int presentX, int presentY, int fx, int fy, char character){
	// use fx, fy recording the coordinates of a point on
	if(flag){
		return ;
	}//finding cycle don't need to DFS

	for(int times = 0; times < 4; ++times){				//doing four times to check up, down, right, left can go 
		int x = presentX + direction[times][0];	//calculate x
		int y = presentY + direction[times][1];	//calculate y

		//check x, y in matrix and character is the same
		if(x >= 0 && x < row && y >= 0 && y < column && board[x][y] == character){
			if(x == fx && y == fy){
				continue;
			}	// point to a previous search
			
			if(visit[x][y]){
				flag = 1;
				return ;
			}	// recursive end
			
			else{
				visit[x][y] = 1;
				flag = 0;
				DFS(x, y, presentX, presentY, character);
			}	//visit new point, mark it and do DFS
		}
	}
}
int main(){
	cin >> row >> column;
	
	memset(visit, 0, sizeof(visit));	//replace all visit value to 0
	
	for(int input = 0; input < row; ++input){
		scanf("%s", board[input]);
	}	//input character

	//find and check cycle in matrix
	for(int row_index = 0; row_index < row; ++row_index){
		for(int column_index = 0; column_index < column; ++column_index){
			if(visit[row_index][column_index] != 1){	//if no visit the point
				visit[row_index][column_index] = 1;	//mark it visited
				flag = 0;	//still no sure finding cycle need to keep checking
				DFS(row_index, column_index, 0, 0, board[row_index][column_index]);
				if(flag){
					break;
				}
			}
		}
		if(flag){
			break;
		}
	}

	if(flag){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}

	return 0;
} 