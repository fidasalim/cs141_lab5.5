//include library
#include <iostream>
using namespace std;

int main(){// Looping for making patterns
	for(int i =0; i<5; i++){// print 5 stars in 1 and 5 th row 
		if(i==0||i==4){
		for(int j =0;j<5;j++)
		cout<<"*";}
		else if(i==2)// print the 3rd row
		{cout<<"* * *";}
		else
		{cout<<"** **";}// print 2nd and 3rd row
		cout<<endl;}
	cout<<endl;
return 0;
} 
