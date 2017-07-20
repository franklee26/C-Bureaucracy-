//midterm problems
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;  

int main(int argc, char *argv[]){

	if (argc!=3){
		cerr<<"Usage: "<<argv[0]<<" inputFile animal"<<endl;
		exit(1);
	}

	string animalname=argv[2];
	string fileadd=argv[1];

	ifstream filename;
	filename.open(fileadd);
	if (filename.fail()){
		cerr<<"Could not open file: "<<argv[1]<<endl;
		exit(1);
	}

	int animalcount(0);

	string lines;
	while(1){
		getline(filename,lines);
		if (filename.eof()){
			break;
		} else if(lines==animalname){
			animalcount++;
		}
	}

	cout<<"There were "<<animalcount<<" "<<animalname<<"s in "<<argv[1]<<endl;

	return 0;
}