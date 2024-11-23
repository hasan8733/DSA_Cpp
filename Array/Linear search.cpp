#include <iostream>
using namespace std;
void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int LinearSearch(int arr[],int size,int num){
	for(int i=0;i<size;i++){
		if(num == arr[i]){
			return i;
		}
		else{
			continue;
		}
	}
	return -1;
}
int main(){
	int arr[] = {1,5,2,6,3,8,55,88,234};
	int size = sizeof(arr)/sizeof(int);
	int num,index;
	display(arr,size);
	cout<<"Enter number : ";
	cin>>num;
	index = LinearSearch(arr,size,num);
	if(index == -1){
		cout<<"Number not found!";
	}
	else{
		cout<<num<<" is found in "<<index<<" index";
	}
}