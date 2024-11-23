#include <iostream>
using namespace std;
class queue{
	public:
		int back;
		int size = 5;
		int arr[5];
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
	q.back = -1;
	q.enqueue(7);
	q.enqueue(6);
	q.enqueue(5);
	q.enqueue(4);
	for(int i=0;i<q.back+1;i++){
		cout<<q.peek(i)<<endl;
	}
}