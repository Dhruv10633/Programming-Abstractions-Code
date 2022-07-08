#include <iostream>
using namespace std;

int main(){
	int p,t;
	float r;
	
	cin>>p>>t;
	
	if(p<=1000){
		r=0.1;
	}
	else{
		r=0.15;	
	}
	float SI=p*r*t;
	cout<<" The SI is : "<<SI;
	return 0;
	
}
