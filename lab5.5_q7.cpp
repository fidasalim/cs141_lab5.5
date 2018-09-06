//include library
#include <iostream>
using namespace std;

int main(){// Looping for making patterns
	//printing stars in rhombus shape
	for(int i =0; i<5; i++){
		//printing space
		int j =0;
		while(j < i){
		cout<<" ";
		j++;}
		//printing stars in shape of rhombus
		//printing 5 stars in 1st and 5th row 
		if (i==0||i==4)
		for(j=0;j<5;j++){
		cout<<"*";}
		//printing 2nd to 4th row
		else {
		cout<<"*";
		for(j=0;j<3;j++){
		cout<<" ";}
		cout<<"*";}
		cout<<endl;}
	cout<<endl;
return 0;
} 
