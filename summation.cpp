#include <iostream>
using namespace std;

int n;

void summation(int n);

int main(){
    cout<<"Please input your final summation integer:\n";
    cin>>n;
    cout<<endl;
    
    summation(n);
    
    cout<<endl;
    
    return 0;
}

void summation(int n){
    int sum=0;
    int i=0;
    while (i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"The sum from 1 to "<<n<<" is "<<sum<<".";
    return;
}