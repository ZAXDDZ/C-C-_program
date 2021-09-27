#include <bits/stdc++.h>
#define MAX 5000

using namespace std;

int dp_sol(int start, int end);
int min(int x, int y);
int height[MAX]; //save every height of fence

int main(){
	int fence; //number of fence
	cin >> fence;
	if(fence >= 1 && fence <= MAX){
		for(int input = 0; input < fence; ++input){
			cin >> height[input];
		} //input every height of fences

		cout << dp_sol(0, fence-1) << endl; //find interval (0 ~ fence-1) the times of painting
	}
	return 0;
}

int dp_sol(int left, int right){
	int paint = MAX; //paint counting

	// horizontal painting
	for(int i = left; i <= right; ++i){
		paint = min(paint, height[i]);
	} //if all fence at least 1 meter height then can paint 1 times finish so finding the minimum height first

	for(int j = left; j <= right; ++j){
		height[j] -= paint;
	} //because minimum height == times of painting continuously so doesn't need to calculate later

	// horizontal painting with gaps
	int trace_left = -1, trace_right = 0; // save continuous leftmost place and rightmost place
	for(int i = left; i <= right; ++i){
		if(i != right && height[i] != 0){
			if(trace_left == -1){
				trace_left = i;
			}
			trace_right = i;
		} //keep leftmost with the same place and find rightmost before encountering gaps
		else if(trace_left != -1){
			paint += dp_sol(trace_left, trace_right);
			trace_left = -1;
		} //find the rightmost and can plus the counting and find next continuous intervel
	}

	return min(paint, right-left+1); //min(horizontal, vertical)
}

int min(int x, int y){
	if(x > y){
		return y;
	}
	else{
		return x;
	}
}