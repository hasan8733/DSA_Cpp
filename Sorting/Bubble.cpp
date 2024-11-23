#include <iostream>
using namespace std;
void bubble(int a[],int s){
	int temp;
	for(int i=0;i<s-1;i++){
		for(int j=0;j<s-i-1;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(int i=0;i<s;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int arr[6] = {4,6,2,9,1,8};
	bubble(arr,6);
}