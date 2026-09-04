#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number of rows: ";
    cin >> n;

    int i = 1;
    

    while(i <= n) {

        int j = 1;
        

        while(j <=n) {
            char value = 'A' + i - 1;
           
            cout << value <<" ";
        
            j++;
            
        }
       

        cout << endl;
        i++;
    }

    return 0;
}