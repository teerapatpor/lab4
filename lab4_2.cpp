#include<iostream>
#include<cmath>
using namespace std;
float findDistance(float u,float a,float t){
		float s;
		s=u*t+0.5*a*pow(t,2);
		return s;
		}
int main(){
	float u,a,t;
	cout<<"U = ";
	cin>>u;
	cout<<"a = ";
	cin>>a;
	cout<<"t = ";
	cin>>t;
	cout<<findDistance(u ,a ,t );
	
	
	return 0;
		
	}
	
	
	
	

