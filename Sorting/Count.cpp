#include <iostream>
using namespace std;
void count(int a[],int s){
	int t;
	int max;
	for(int i=0;i<s-1;i++){
		for(int j=0;j<s-i-1;j++){
			if(a[j]>a[j+1]){
				max = a[j];
			}
		}
	}
	int c[max+1];
	for(int i=0;i<max+1;i++){
		c[i] = 0;
	}
	for(int i=0;i<s;i++){
		t = a[i];
		c[t]++;
	}
	int i=0,j=0;
	while(i<max+1){
		if(c[i]>0){
			a[j] = i;
			c[i]--;
			j++;
		}
		i++;
	}
	for(int i=0;i<s;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[6] = {8,4,7,1,0,2};
	count(a,6);
}