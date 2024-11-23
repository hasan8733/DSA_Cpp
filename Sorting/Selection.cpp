#include <iostream>
using namespace std;
void selection(int a[],int s){
	int min,temp;
	for(int i=0;i<s;i++){
		min = i;
		for(int j=i+1;j<s;j++){
			if(a[min]>a[j]){
				min = j;
			}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	for(int i=0;i<s;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[6] = {8,4,2,7,5,1};
	int size = 6;
	selection(a,size);
}