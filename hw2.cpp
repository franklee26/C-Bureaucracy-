#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int a,sumpositive=0,sumnegative=0;
    string promptcontinue="\nTo continue enter Y/y\n";
    string promptnum="\nEnter a number: ";
    char response;
    
    do{
        
        cout<<promptnum;
        cin>>a;
        
        if (a>=0){
            sumpositive+=a;
        } else {
            sumnegative+=a;
        }
        
        cout<<promptcontinue;
        cin>>response;
    } while (response == ('y'|'Y'));
    cout<<"Sum of all the positive numbers is: "<<sumpositive<<endl;
    cout<<"Sum of all the negative numbers is: "<<sumnegative<<endl;
    
    return 0;
}