/* 
The harmonic series. Given an input n, we will sum the first n terms of the harmonic series. (testing for loops)
 
 If I were to enter 0, the programme will quit. The next problem is how to assign an int value to a string...In other words, I want to enter the word 'quit' instead of 0. 
*/

#include <iostream>
using namespace std;

int n;
void summation(int n);

int main(){
    cout<<"How many terms do you want to sum?\n";
    cin>>n;
    if (n!=0){
        summation(n);
    } else{
        cout<<"Programme has terminated."<<endl;
    }
    
    while (n!=0){
        main();
    }
    
    return 0;
}

void summation(int n){
    double summ=0.0;
    cout.setf(ios::fixed);
    cout.precision(6);
    cout.setf(ios::showpoint);
    
    for (int i=1; i<=n; i++){
        summ=summ+(1.0/i);
    }
    cout<<"The sum for the first "<<n<<" terms is: "<<summ<<".\n";
    
    return;
}