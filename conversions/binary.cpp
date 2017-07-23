// Converting binary to decimal
// Frank Lee 17/6

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std; 

void convertbin(int adecimal){
	int x=adecimal;
	int q=adecimal/2;
	string numm;

	while (q != 0){
		int r = adecimal - 2*q;
		numm=to_string(r)+numm;
		adecimal=q;
		q=q/2;
	}
	numm=to_string(adecimal)+numm;
	int binary=stoll(numm);
	cout<<endl;
	cout<<"             ~~~The decimal digit "<<x<<" is "<<binary<<" in binary.~~~"<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
	cout<<endl;
}