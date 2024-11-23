#include <iostream>
using namespace std;
void insertion(int a[],int s){
	int key,j;
	for(int i=1;i<s;i++){
		key = a[i];
		j = i-1;
		while(j>=0 && a[j]>key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
	for(int i=0;i<s;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[6] = {6,3,7,1,2,4};
	insertion(a,6);
}