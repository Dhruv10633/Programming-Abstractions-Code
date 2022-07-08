#include <iostream>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	
	int i=0;
	int lar=INT_MIN;
	int small=INT_MAX;
	int sum=0;
	while(i<n){
		int k=0;
		cin>>k;
		if(lar<k){
			lar=k;
		}
		if(small>k){
			small=k;
		}
		sum+=k;
		
		i++;
	}
	cout<<"samllest : "<<small<<endl;
	cout<<"largest : "<<lar<<endl;
	cout<<"mean/avg : "<<(float)sum/n;
} 

