#include<iostream>
using namespace std;

int main(){

    int total_amount;

    cout << "Enter total amount: ";
    cin >> total_amount;

    while(total_amount != 0){

        if(total_amount >= 100){

            int note = total_amount / 100;
            total_amount %= 100;

            cout << "100 Notes = " << note << endl;
        }

        else if(total_amount >= 50){

            int note = total_amount / 50;
            total_amount %= 50;

            cout << "50 Notes = " << note << endl;
        }

        else if(total_amount >= 20){

            int note = total_amount / 20;
            total_amount %= 20;

            cout << "20 Notes = " << note << endl;
        }

        else if(total_amount >= 10){

            int note = total_amount / 10;
            total_amount %= 10;

            cout << "10 Notes = " << note << endl;
        }

        else if(total_amount >= 5){

            int note = total_amount / 5;
            total_amount %= 5;

            cout << "5 Notes = " << note << endl;
        }

        else if(total_amount >= 2){

            int note = total_amount / 2;
            total_amount %= 2;

            cout << "2 Notes = " << note << endl;
        }

        else{

            int note = total_amount / 1;
            total_amount %= 1;

            cout << "1 Notes = " << note << endl;
        }
    }

    return 0;
}
