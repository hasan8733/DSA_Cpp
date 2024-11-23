#include <iostream>
using namespace std;
void display(int a[],int s){
	for(int i=0;i<s;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int partition(int a[],int l,int h){
	int p = a[l];
	int i = l+1;
	int j = h;
	int temp;
	do{
		while(p>a[i]){
			i++;
		}
		while(p<a[j]){
			j--;
		}
		if(i<j){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}while(i<j);
	temp = a[l];
	a[l] = a[j];
	a[j] = temp;
	return j;
}
void quick(int a[],int l,int h){
	int index;
	if(l<h){
		index = partition(a,l,h);
		quick(a,l,index-1);
		quick(a,index+1,h);
	}
}
int main(){
	int a[6] = {7,3,5,1,9,0};
	int size = 6;
	display(a,6);
	quick(a,0,size-1);
	display(a,6);
}