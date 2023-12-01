#include<iostream>
using namespace std;

int main(){
    
    int N;
    int Even = 0;
    int Odd = 0;
    while(true){

        cout << "Enter an integer: ";
        cin >> N;
        if(N == 0){
            break;
        }else if(N%2 == 0){
            Even++;
        }else if(N%2 != 0){
            Odd++;
        }
    }

    cout << "#Even numbers = " << Even << "\n";
    cout << "#Odd numbers = " << Odd;
    
    return 0;
}
