// Converting binary to decimal

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

void convertb(string numm){
	int lengtho=numm.length();
	int finalnum(0);

	if (numm=="quit"){
		return;
	}
	for (char & c : numm){
		int i = c - '0'; //converting a char-type to an int-type
		int digit=i*pow(2,lengtho-1);
		finalnum=finalnum+digit;
		lengtho--; 
	}

	cout<<endl;
	cout<<"             ~~~The binary digit "<<numm<<" is "<<finalnum<<" in decimal.~~~"<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
	cout<<endl;

	return;

}