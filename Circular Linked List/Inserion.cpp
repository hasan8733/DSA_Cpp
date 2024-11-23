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
int count(node *head){
	node *temp = head;
	int i = 0;
	do{
		temp = temp->next;
		i++;
	}while(temp != head);
	return i;
}
node *insert_first(node *head,int n){
	node *ptr;
	ptr = new node();
	ptr->num = n;
	node *temp = head->next;
	while(temp->next != head){
		temp = temp->next;
	}
	temp->next = ptr;
	ptr->next = head;
	head = ptr;
	return head;
}
node *insertion(node *head,int n,int index){
	node *temp = head;
	node *ptr;
	ptr = new node();
	int i=0;
	do{
		temp = temp->next;
		i++;
	}while(i!=index-1);
	ptr->num = n;
	ptr->next = temp->next;
	temp->next = ptr;
	do{
		temp = temp->next;
	}while(temp != head);
	return temp;
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
	int n,index,size;
	size = count(head);
	cout<<endl<<"Enter number u want to insert : ";
	cin>>n;
	cout<<"Enter index : ";
	cin>>index;
	if(index == 0){
		head = insert_first(head,n);
	}
	else if(index <= size){
		head = insertion(head,n,index);
	}
	else{
		cout<<"Invalid index!";
		cout<<endl;
	}
	display(head);
}