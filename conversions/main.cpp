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

	cout<<"Conversion program v1. 27/6 Frank Lee."<<endl;

	cout<<endl;
	cout<<"          ======================================================="<<endl;
	cout<<endl;
	cout<<"          \e[1mThis program converts between base 2 or 16 and decimal.\e[0m"<<endl;
	cout<<endl;
	cout<<"          ======================================================="<<endl;
	cout<<endl;

	cout<<"Would you like to convert from another base to decimal (\e[1;36menter y\e[0m) or decimal to another base (\e[1;36menter n\e[0m)? (enter \e[1;32mquit\e[0m to quit) ";
	cin>>response;

	if (response=="y"){
		cout<<"Please enter which base you would like to convert from (enter 12345 to quit): ";
		cin>>base; 

		if (base == 12345){
			cout<<"\e[1;32mexiting...\e[0m"<<endl;
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

		while (type != "quit"){
			main();
		}
	} else if (response=="quit"){
		cout<<"\e[1;32mExiting...\e[0m"<<endl;
		exit(0);
	}

	return 0;
}