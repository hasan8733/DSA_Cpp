#include <iostream>
using namespace std;
class node{
	public:
		int num;
		node *next;
};
void display(node *head){
	node *temp = head;
	do{
		cout<<temp->num<<" ";
		temp = temp->next;
	}while(temp != head);
}
int main(){
	node *head;
	node *one;
	node *two;
	node *three;
	node *four;
	one = new node();
	two = new node();
	three = new node();
	four = new node();
	head = one;
	one->num = 1;
	two->num = 2;
	three->num = 3;
	four->num = 4;
	one->next = two;
	two->next = three;
	three->next = four;
	four->next = head;
	display(head);
}