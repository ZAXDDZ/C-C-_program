#include <bits/stdc++.h>

using namespace std;

int main()
{
    string number;
    while(getline(cin, number))
    {
        if(number == "0")
        {
            break;
        }

        vector<long int> NUM; //­original number
        vector<long int> NUM_r; //reverse number
        vector<string> history; //record every output result
        string ans; //      string answear ="0";//save output result

        NUM.clear(); //clear NUM
        NUM_r.clear(); //clear NUM_r


        long int place;
        long int seat;
        for(place = 0; place < number.size(); place++)
        {
            number[place] = int(number[place]) - '0';
            NUM.push_back(number[place]);
        } //change number into int type

        cout << "Original number was ";
        for(seat = 0; seat < NUM.size(); seat++)
        {
            cout << NUM[seat];
        } //output origin
        cout << endl;

        int counter = 0;
        int temp=0;
        while(true)
        {
            if(history.size() >= 2){
                vector<string>::iterator it; //= find(history.begin(), history.end(), ans);
                    for(it=history.begin();it!=history.end();it++){
                        if(*it == ans&&it!=history.end()-1){
                        	temp++;
                        	break;
                        }
                    }
                    if (temp>0){
                        cout << "Chain length " << counter << "\n\n";
                        break;
                    }
             }

            sort(NUM.begin(), NUM.end());


            NUM_r = NUM;
            reverse(NUM_r.begin(), NUM_r.end());

            for(seat = 0; seat < NUM_r.size(); seat++)
            {
                cout << NUM_r[seat];
            }
            cout << " - ";
            for(seat = 0; seat < NUM.size(); seat++)
            {
                cout << NUM[seat];
            }
            cout << " = ";  //output minus formula


            for(place = 0; place < NUM.size(); place++)
            {
                if(NUM[place] >= NUM_r[place])
                {
                    NUM[place] = NUM[place] - NUM_r[place];
                } //no need carry number
                else
                {
                    NUM[place] = NUM[place] + 10 - NUM_r[place];
                    NUM[place + 1] -= 1;
                } //need carry number
            }


            float num=0;
            for(place = 0; place < NUM.size(); place++){
                num = NUM[place] * pow(10,place)+num;
            }
            if(num == 0){
                NUM.clear();
                NUM.push_back(0);
            }
            if(num != 0){
                reverse(NUM.begin(), NUM.end());
                place = NUM.size() - 1;
                while(NUM[place] == 0 && NUM[place - 1] != 0){
                        NUM.pop_back();
                        place--;
                    }
                }

            ans=to_string(int(num));
            history.push_back(ans);
            counter++;
            cout << ans << endl;

        }
    }
    return 0;
}
