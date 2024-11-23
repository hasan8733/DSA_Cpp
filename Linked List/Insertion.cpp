#include <iostream>
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
	int size = 0;
	node *temp = head;
	while(temp != NULL){
		size++;
		temp = temp->next;
	}
	return size;
}
void insert_first(node *&head,int n){
	node *temp;
	temp = new node();
	temp->num = n;
	temp->next = head;
	head = temp;
}
void insertion(node *head,int n,int index){
	node *temp = head;
	node *ptr;
	ptr = new node();
	int i=0;
	while(i!=index-1){
		temp = temp->next;
		i++;
	}
	ptr->num = n;
	ptr->next = temp->next;
	temp->next = ptr;
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
	int n,index,size;
	size = count(head);
	cout<<"Enter number : ";
	cin>>n;
	cout<<"Enter index : ";
	cin>>index;
	if(index == 0){
		insert_first(head,n);
	}
	else if(index <= size){
		insertion(head,n,index);
	}
	else{
		cout<<"Invalid index!"<<endl;
	}
	display(head);
}