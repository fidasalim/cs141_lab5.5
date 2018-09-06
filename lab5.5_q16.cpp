//include library
#include <iostream>
using namespace std;

int main(){// Looping for making patterns
	int n=5;
	int i,j;
	//printing rows
	for(i=0;i<n;i++){
		//printing spaces
		for(j=0;j<(n-i);j++){
		cout<<" ";}
		//printing i star
		for(int j=1; j< (i+1);j++){
		cout<<"*";}
		//print 1 star
		cout<<"*";
		//print i star
		for(int j=1; j< (i+1);j++){
		cout<<"*";}
		
	cout<<endl;}
	return 0;
}
