#include <iostream>
using namespace std;
class node{
	public:
		int num;
		node *prev;
		node *next;
};
void display(node *head){
	node *temp = head;
	while(temp != NULL){
		cout<<temp->num<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
void reverse(node *head){
	node *temp = head;
	while(temp != NULL){
		cout<<temp->num<<" ";
		temp= temp->prev;
	}
}
int main(){
	node *head;
	node *one;
	node *two;
	node *three;
	one = new node();
	two = new node();
	three = new node();
	one->num = 1;
	two->num = 2;
	three->num = 3;
	one->prev = NULL;
	one->next = two;
	two->prev = one;
	two->next = three;
	three->prev = two;
	three->next = NULL;
	head = one;
	display(head);
	reverse(three);
}