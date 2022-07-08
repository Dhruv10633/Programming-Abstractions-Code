//   1
//  232
// 34543
//4567654

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i=0;
	
	while(i<n){
		
		int k=n-i-1;
		while(k!=0){
			cout<<" ";
			k--;
		}
		
		int j=0;
		k=i+1;
		while(j<=i){
			cout<<k;
			j++;
			k++;
		}
		
		j=0;
		k=i*2;
		while(j<i){
			cout<<k;
			j++;
			k--;
		}
		
		
		cout<<endl;
		i++;
	}
}
