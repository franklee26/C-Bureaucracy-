/* New way of finding the min of 4 numbers. Using command line arguments */

#include <iostream>
#include <cstdlib>
using namespace std;

int minof4(int a, int b, int c, int d);

int main(int argc, char *argv[]){
    if (argc != 5){
        cerr<<"Usage: "<<argv[0]<<" num 1 num 2 num 3 num 4"<<endl;
        exit(1);
    }
    
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int d = atoi(argv[4]);
    
    cout<<"The minimum of the 4 given numbers is "<<minof4(a,b,c,d)<<"."<<endl;
    
    return 0;
}

int minof2(int x, int y){
    if (x<=y){
        return x;
    } return y;
}

int minof3(int x, int y, int z){
    return minof2(x, minof2(y,z));
}

int minof4(int x, int y, int z, int w){
    return minof3(x,y,minof2(z,w));
}