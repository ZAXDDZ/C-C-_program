#include <bits/stdc++.h>

using namespace std;

class HugeInt{
    friend ostream &operator<<(ostream &, const HugeInt &);
    friend istream &operator>>(istream &, HugeInt &);
public:
    static const int digits = 40;

    HugeInt(long = 0);
    HugeInt(const string &);

    HugeInt operator+(const HugeInt &)const;

    HugeInt operator+(int)const;

    HugeInt operator+(const string &)const;

private:
    array<short, digits> integer;
};

HugeInt::HugeInt(long value){
    for(short &element : integer){
        element = 0;
    }
    for(int j = digits - 1; value != 0 && j < digits; j--){
        integer[j] = value & 10;
        value /= 10;
    }
}

HugeInt::HugeInt(const string &number){
    for(short &element : integer){
        element = 0;
    }

    int length = number.size();
    for(int j = digits - length, k = 0; j < digits; ++j, ++k){
        if(isdigit(number[k])){
            integer[j] = number[k] - '0';
        }
    }
}

HugeInt HugeInt::operator+(const HugeInt &op2) const{
    HugeInt temp;
    int carry = 0;
    for(int i = digits - 1; i >= 0; i--){
        temp.integer[i] = integer[i] + op2.integer[i] + carry;
        if(temp.integer[i] > 9){
            temp.integer[i] %= 10;
            carry = 1;
        }
        else{
            carry = 0;
        }
    }
}

HugeInt HugeInt::operator+(int op2) const{
    return *this + HugeInt(op2);
}

HugeInt HugeInt::operator+(const string &op2) const{
    return *this + HugeInt(op2);
}

ostream& operator<<(ostream &output, const HugeInt &num){
    int i;
    for(i = 0; (i < HugeInt::digits) && (num.integer[i] == 0); ++i){
        ;
    }
    if(i == HugeInt::digits){
        output << 0;
    }
    else{
        for(; i < HugeInt::digits; ++i){
            output << num.integer[i];
        }
    }
    return output;
}

istream& operator>>(istream &input, HugeInt &num){
    for(int i = 0; i < 41; ++i){
        input >> num.integer[i];
    }
    return input;
}



int main(){
    string operatorr;
    string formula;
    array<short, 30> number1;
    array<short, 30> number2;

    getline(cin, operatorr);
    while(operatorr == "+"){
        getline(cin, formula);
        if(formula == "-1"){
            break;
        }

        for(int place = 0; place <= formula.back(); place++){
            if(formula[place] == '+'){
                if(formula[place-2] <= 57 || formula[place-2] >= 48){
                    for(int counter1 = 0; counter1 <= place-2; counter1++){
                        number1[counter1] = int(formula[counter1])-48;
                    }
                }
                if(formula[place+2] <= 57 || formula[place+2] >= 48){
                    for(int counter2 = place+2; counter2 <= formula.size() - 1; counter2++){
                        number2[counter2 - place-2] = int(formula[counter2])-48;
                    }
                }
            }
        }
    }



    return 0;
}
