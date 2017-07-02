/* Leibniz formula. How accurate can we get?? */

#include <iostream>
#include <cmath>

using namespace std;

int n;
void leibniz(int n);

int main(){
    n=1;
    leibniz(n);
    
    return 0;
}

void leibniz(int n){
    n=0;
    double summ=0.0;
    cout.setf(ios::fixed);
    cout.precision(9);
    cout.setf(ios::showpoint);
    
    while ((summ<=3.141592554)||(summ>=3.141592754)){
        summ=0;
        for (int i=0; i<=n; i++){
            summ=summ+(pow((-1),i))/(2*i+1);
        }
        summ=4.0*summ;
        cout<<summ<<" with "<<n+1<<" number of terms."<<"\n";
        n=n+1;
    }
    return;
}