// Frank Lee 17/7
// This program is for CSV files
// Building a "table" for an Euler approximation for y'=sin(xy) with y(0)=0.
// Goal is to export to a .csv file

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std; 

void eulerstep(double stepinc, double initiall, int numm);

int main(){

	int numpoints;
	double timeincrement;
	double yinitial;

	cout<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"This is an Euler approximation for the ODE y'=sin(xy)+cos(x+y)."<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl;

	cout<<"Please your time increment: ";
	cin>>timeincrement;
	cout<<"Please enter your initial condition y(0)=";
	cin>>yinitial;
	cout<<"How many data points would you like? ";
	cin>>numpoints;

	eulerstep(timeincrement,yinitial,numpoints);

	cout<<endl;
	cout<<"===+++===========================+++==="<<endl;
	cout<<"Your Euler approximation is finished."<<endl;
	cout<<"===+++===========================+++==="<<endl;
	cout<<endl;

	return 0;
}

void eulerstep(double stepinc, double initiall, int numm){

	string filename;
	cout<<"Please enter your file name with an .csv extention: ";
	cin>>filename;

	ofstream outfile;
	outfile.open(filename);

	double x=-stepinc;

	outfile.setf(ios::fixed);
	outfile.setf(ios::showpoint);
	outfile.precision(6);

	outfile<<"Euler approximation for y'=sin(xy)+cos(x+y) with initial condition y(0)="<<initiall<<", time step of "<<stepinc<<" and "
	<<numm<<" steps."<<endl;

	outfile<<"x,y(x),y'(x),y_new"<<endl;
	outfile<<endl;

	for (int i=0; i<numm; i++){
		x=x+stepinc;
		double yprime=sin(x*initiall)+cos(x+initiall);
		double ynew=initiall+stepinc*yprime;
		outfile<<x<<","<<initiall<<","<<yprime<<","<<ynew<<","<<endl;
		initiall=ynew;
	}

	outfile.close();

	return;
}

