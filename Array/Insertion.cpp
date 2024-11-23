#include <iostream>
using namespace std;
void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
bool insertion(int arr[],int size,int capacity,int num,int index){
	if(capacity<=size){
		return false;
	}
	else{
		for(int i=size-1;i>=index;i--){
			arr[i+1] = arr[i];
		}
		arr[index] = num;
		return true;
	}
}
int main(){
	int arr[100] = {1,5,11};
	int size = 3 , capacity = 100;
	int num,index;
	bool flag;
	display(arr,size);
	cout<<"Enter number for insert : ";
	cin>>num;
	cout<<"Enter index : ";
	cin>>index;
	flag = insertion(arr,size,capacity,num,index);
	if(flag == true){
		size+=1;
		display(arr,size);
	}
	else{
		display(arr,size);
	}
}