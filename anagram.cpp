#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string inputword1, inputword2;

bool isanagram(string a, string b){
	int j=0;
	int k=0;
	char newa[a.length()];
	char newb[b.length()];
	//eliminating unwanted chars
	for (int i=0; i<a.length(); i++){
		if (((int)a[i]<=90 && (int)a[i]>=65)||((int)a[i]<=122 && (int)a[i]>=97)){
			newa[j]=tolower(a[i]);
			j++;
		}
	}
	for (int i=0; i<b.length(); i++){
		if (((int)b[i]<=90 && (int)b[i]>=65)||((int)b[i]<=122 && (int)b[i]>=97)){
			newb[k]=tolower(b[i]);
			k++;
		}
	}
	if (j!=k){
		return false;
	} else {
		int arr1[j];
		int arr2[j];
		for (int i=0; i<j; i++){
			arr1[i]=(int)newa[i];
		}
		for (int i=0; i<k; i++){
			arr2[i]=(int)newb[i];
		}

		//now we must sort arr1 and arr2 (using insert sort method (O(n) time), could use merge sort...) 
		for (int m=1; m<j; m++){
			int key=arr1[m];
			int i=m-1;
			while (i>=0 && arr1[i]>key){
				arr1[i+1]=arr1[i];
				i=i-1;
			}
			arr1[i+1]=key;
		}
		for (int m=1; m<k; m++){
			int key=arr2[m];
			int i=m-1;
			while (i>=0 && arr2[i]>key){
				arr2[i+1]=arr2[i];
				i=i-1;
			}
			arr2[i+1]=key;
		}
		int z(0);
		while (z<j){
			if (arr1[z]!=arr2[z]){
				return false;
			}
			else {
				z=z+1;
			}
		}
		return true; 
	} 
}

int main(){
	
	cout<<isanagram("Rats and Mice","in cat's dream")<<endl;

	return 0;
}