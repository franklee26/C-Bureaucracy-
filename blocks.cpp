// From lab01 in CS16

#include <iostream>
using namespace std;

int rows, columns;
void drawblocks(int rows, int columns);

int main(){
    
    cout<<"Please input the number of rows and the number of columns.\n";
    cin>>rows>>columns;
    
    drawblocks(rows,columns);

    while (rows!=0 && columns!=0){
        main();
    }
    
    return 0;
}

void drawblocks(int rows, int columns){
    for (int i=1; i<=rows; i++){
        for (int k=1; k<=columns; k++){
            cout<<"X.";
        }
        cout<<endl;
    }
    return;
}
