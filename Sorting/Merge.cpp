#include <iostream>
using namespace std;
void display(int a[],int s){
	for(int i=0;i<s;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void merge(int a[],int b[],int c[],int m,int n){
	int i=0,j=0,k=0;
	while(i<m && j<n){
		if(a[i]<=b[j]){
			c[k] = a[i];
			k++;
			i++;
		}
		else{
			c[k] = b[j];
			k++;
			j++;
		}
	}
	while(i<m){
		c[k] = a[i];
		k++;
		i++;
	}
	while(j<n){
		c[k] = b[j];
		k++;
		j++;
	}
}
int main(){
	int a[5] = {2,4,7,9,10};
	int b[4] = {1,3,7,8};
	int c[9];
	merge(a,b,c,5,4);
	display(a,5);
	display(b,4);
	display(c,9);
}