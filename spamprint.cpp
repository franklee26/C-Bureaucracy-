//* Working with while loops
/*
 Goal is just to print out your number if less than an inputed number. Number will be reduced by one continuously until it reaches the input number.
 */


#include <iostream>
using namespace std;

int i,n;

void spammer(int i, int n);

int main(){
    cout<<"What do you want your max number to be?\n";
    cin>>n;
    
    cout<<"Please input an integer greater than 0\n";
    cin>>i;
    spammer(i,n);
    
    return 0;
}

void spammer(int i, int n){
    while (i>n){
        cout<<"Your number, "<<i<<" is still greater than "<<n<<".\n";
        i=i-1;
    }
    
    cout<<"Finished.\n";
    
    return;
}