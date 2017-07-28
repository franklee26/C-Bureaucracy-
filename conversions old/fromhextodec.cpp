// Converting hex to decimal

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

void convert(string numm){
	int lengtho=numm.length();
	int finalnum(0);

	for (char & c : numm){
		if ((c!='A')&&(c!='B')&&(c!='C')&&(c!='D')&&(c!='E')&&(c!='F')){
			int i = c - '0'; //converting a char-type to an int-type
			double digit=i*pow(16,lengtho-1);
			finalnum=finalnum+digit;
		} else if (c=='A'){
			double digit=10*pow(16,lengtho-1);
			finalnum=finalnum+digit;
		} else if (c=='B'){
			int digit=11*pow(16,lengtho-1);
			finalnum=finalnum+digit;
		} else if (c=='C'){
			int digit=12*pow(16,lengtho-1);
			finalnum=finalnum+digit;
		} else if (c=='D'){
			int digit=13*pow(16,lengtho-1);
			finalnum=finalnum+digit;
		} else if (c=='E'){
			int digit=14*pow(16,lengtho-1);
			finalnum=finalnum+digit;
		} else if (c=='F'){
			int digit=15*pow(16,lengtho-1);
			finalnum=finalnum+digit;
		}
		lengtho--; 
	}

	cout<<endl;
	cout<<"             ~~~The hexadecimal digit "<<numm<<" is "<<finalnum<<" in decimal.~~~"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<endl;

	return;

}