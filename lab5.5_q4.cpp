//include library
#include <iostream>
using namespace std;

int main(){// Looping for making patterns
	//printing stars in rhombus shape
	for(int i =0; i<5; i++){
		//printing space
		int j =0;
		while(j < 4-i){
		cout<<" ";
		j++;}
		//printing 5 stars in shape of rhombus
		for(j=0;j<5;j++){
		cout<<"*";}
		cout<<endl;}
	cout<<endl;
return 0;
} 
