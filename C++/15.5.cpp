#include<bits/stdc++.h>

using namespace std;

inline rectArea(int, int);

int main(){
    int lengh;
    int width;
    cin >> lengh;
    cin >> width;
    rectArea(lengh, width);
    return 0;
}

inline rectArea(int l, int w){
    int rect = l * w;
    cout << rect << endl;
}
