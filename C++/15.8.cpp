#include<bits/stdc++.h>

using namespace std;

template <class T>
T product(T value1, T value2){
    T result = value1 * value2;
    return result;
}

int main(){
    int int1, int2;
    cin >> int1 >> int2;
    cout << product(int1, int2) << '\n';
    double double1, double2;
    cin >> double1 >> double2;
    cout << product(double1, double2) << "\n";
    return 0;
}
