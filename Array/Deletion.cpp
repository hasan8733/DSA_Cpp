#include <iostream>
using namespace std;
void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
bool deletion(int arr[],int size,int index){
	for(int i=index;i<=size-1;i++){
		arr[i] = arr[i+1];
	}
	return true;
}
int main(){
	int arr[100] = {1,3,5,7};
	int size = 4,index;
	bool flag;
	display(arr,size);
	cout<<"Enter index u want to delete : ";
	cin>>index;
	flag=deletion(arr,size,index);
	if(flag == true){
		size -= 1;
		display(arr,size);
	}
	else{
		cout<<"Deletion error";
	}
}