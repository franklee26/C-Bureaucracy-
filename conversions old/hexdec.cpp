// Converting decimal to hexadecimal
// Frank Lee 23/6

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std; 

void converthex(int adecimal){
	int x=adecimal;
	int q=adecimal/16;
	string numm;

	while (q != 0){
		int r = adecimal - 16*q;
		if (r<10){
		 numm=to_string(r)+numm;
		} else if (r==10){
			numm="A"+numm;
		} else if (r==11){
			numm="B"+numm;
		} else if (r==12){
			numm="C"+numm;
		} else if (r==13){
			numm="D"+numm;
		} else if (r==14){
			numm="E"+numm;
		} else if (r==15){
			numm="F"+numm;
		}
		adecimal=q;
		q=q/16;
	}
	if (adecimal<10){
		numm=to_string(adecimal)+numm;
	} else if (adecimal==10){
			numm="A"+numm;
		} else if (adecimal==11){
			numm="B"+numm;
		} else if (adecimal==12){
			numm="C"+numm;
		} else if (adecimal==13){
			numm="D"+numm;
		} else if (adecimal==14){
			numm="E"+numm;
		} else if (adecimal==15){
			numm="F"+numm;
		}
	cout<<endl;
	cout<<"             ~~~The decimal digit "<<x<<" is "<<numm<<" in hexadecimal.~~~"<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
	cout<<endl;
}