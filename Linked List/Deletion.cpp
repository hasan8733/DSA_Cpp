#include <iostream>
#include <cstdlib>
using namespace std;
class node{
	public:
		int num;
		node *next;
};
void display(node *head){
	while(head != NULL){
		cout<<head->num<<" ";
		head = head->next;
	}
	cout<<endl;
}
int count(node *head){
	node *temp = head;
	int size = 0;
	while(temp != NULL){
		size++;
		temp = temp->next;
	}
	return size;
}
void delete_first(node *&head){
	node *temp = head;
	head = head->next;
	free(temp);
}
void deletion(node *head,int index){
	int i = 0;
	node *temp = head;
	while(i != index-1){
		i++;
		temp = temp->next;
	}
	node *ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);
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
	one->num = 1;
	two->num = 2;
	three->num = 3;
	four->num = 4;
	one->next = two;
	two->next = three;
	three->next = four;
	four->next = NULL;
	head = one;
	display(head);
	int index,size;
	size = count(head);
	cout<<"Enter index u want to delete : ";
	cin>>index;
	if(index == 0){
		delete_first(head);
	}
	else if(index <= size-1){
		deletion(head,index);
	}
	else{
		
	}
	display(head);
}