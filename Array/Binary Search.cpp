#include <iostream>
using namespace std;
void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int BinarySearch(int arr[],int size,int num){
	int low = 0,mid,high = size-1;
	while(low<=high){
		mid = (high+low)/2;
		if(arr[mid] == num){
			return mid;
		}
		else if(arr[mid]<num){
			low = mid+1;
		}
		else if(arr[mid]>num){
			high = mid-1;
		}
	}
	return -1;
}
int main(){
	int arr[] = {1,3,5,7,9,11,13};
	int size = sizeof(arr)/sizeof(int);
	int num,index;
	display(arr,size);
	cout<<"Enter number : ";
	cin>>num;
	index = BinarySearch(arr,size,num);
	if(index == -1){
		cout<<"Number not found!";
	}
	else{
		cout<<num<<" is found in "<<index<<" index";
	}
}