// main project: converting hex to binary to dec
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include "convert.h"
#include "fromhextodec.h"
#include "binary.h"
#include "hexdec.h"
using namespace std; 

int base;
string response;
string num; 
int decc;
string type;

int main(){

	cout<<endl;
	cout<<"          ======================================================="<<endl;
	cout<<endl;
	cout<<"          This program converts between base 2 or 16 and decimal."<<endl;
	cout<<endl;
	cout<<"          ======================================================="<<endl;
	cout<<endl;

	cout<<"Would you like to convert from another base to decimal (enter y) or decimal to another base (enter n)? ";
	cin>>response;

	if (response=="y"){
		cout<<"Please enter which base you would like to convert from (enter 12345 to quit): ";
		cin>>base; 

		if (base == 12345){
			cout<<"exiting..."<<endl;
			exit(1);
		} else if (base!=2 && base!=16){
			cout<<endl;
			cout<<"You must enter either base 2 or base 16. Base "<<base<<" is invalid. Please try again."<<endl;
			main();
		} else if (base==2){
			cout<<"Please enter your binary digit: ";
			cin>>num;
			convertb(num);
		} else if (base==16){
			cout<<"Please enter your hexadecimal digit: ";
			cin>>num;
			convert(num);
		}

		while (base != 12345){
			main();
		}
	} else if (response=="n"){
		cout<<"Would you like to convert your decimal to binary (bin) or hexadecimal (hex)? (enter 'quit' to quit) ";
		cin>>type;
		if (type=="quit"){
			cout<<"exiting..."<<endl;
			exit(1);
		} else if (type=="bin"){
			cout<<"Please enter your decimal number that will be converted to binary: ";
			cin>>decc; 
			convertbin(decc);
		} else if (type=="hex"){
			cout<<"Please enter your decimal number that will be converted to hexadecimal: ";
			cin>>decc;
			converthex(decc);
		}
	}

	return 0;
}