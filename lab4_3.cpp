#include<iostream>
using namespace std;
int findDivision(int x){
	int k=2;
	if(x>0){
		while(x%k!=0){		
		k=k+1;
	}
		cout<<k;
	return x;
	}
	}
	

int main(){
	int x;
	cout<<"input = ";
	cin>>x;
	findDivision(x);
	
	return 0;
}
