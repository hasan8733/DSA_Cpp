#include <iostream>
using namespace std;
class stack{
	public:
		int top;
		int size;
		int arr[];
		bool isFull(){
			if(top == size-1){
				return true;
			}
			return false;
		}
		bool isEmpty(){
			if(top == -1){
				return true;
			}
			return false;
		}
		void push(int n){
			if(!isFull()){
				top++;
				arr[top] = n;
			}
			else{
				cout<<"Stack Overflow"<<endl;
			}
		}
		int pop(){
			if(!isEmpty()){
				int n = arr[top];
				top--;
				return n;
			}
			else{
				cout<<"Stack underflow"<<endl;
				return -1;
			}
		}
};
int main(){
	stack s;
	s.top = -1;
	s.size = 5;
	s.push(6);
	cout<<s.pop();
}