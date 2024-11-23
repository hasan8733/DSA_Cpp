#include <iostream>
using namespace std;
class queue{
	public:
		int back = -1;
		int size = 7;
		int arr[7];
		bool isEmpty(){
			if(back == -1){
				return true;
			}
			return false;
		}
		bool isFull(){
			if(back == size-1){
				return true;
			}
			return false;
		}
		void enqueue(int n){
			if(!isFull()){
				back++;
				arr[back] = n;
			}
			else{
				cout<<"Queue is Full";
			}
		}
		int dequeue(){
			if(!isEmpty()){
				int n = arr[back];
				back--;
				return n;
			}
			else{
				cout<<"Queue is Empty";
			}
		}
		int peek(int i){
			return arr[i];
		}
};
int main(){
	queue q;
	int node;
	int i = 0;
	int visited[7] = {0,0,0,0,0,0,0};
	int a[7][7] = {
		{0,1,1,1,0,0,0},
		{1,0,1,0,0,0,0},
		{1,1,0,1,1,0,0},
		{1,0,1,0,1,0,0},
		{0,0,1,1,0,1,1},
		{0,0,0,0,1,0,0},
		{0,0,0,0,1,0,0}
	};
	cout<<i<<" ";
	visited[i] = 1;
	q.enqueue(i);
	while(!q.isEmpty()){
		node = q.dequeue();
		for(int j=0;j<7;j++){
			if(a[node][j] == 1 && visited[j] == 0){
				cout<<j<<" ";
				visited[j] = 1;
				q.enqueue(j);
			}
		}
	}
}