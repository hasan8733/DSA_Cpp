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
int linear(node *head,int n){
	int i = 0;
	while(head != NULL){
		if(head->num == n){
			return i;
		}
		else{
			head = head->next;
			i++;
		}
	}
	return -1;
}
int count(node *head){
	int i=0;
	while(head != NULL){
		head = head->next;
		i++;
	}
	return i;
}
node *mid_node(node *low,node *high){
	if(low == NULL){
		return NULL;
	}
	node *slow = low;
	node *fast = low->next;
	while(fast != high){
		fast = fast->next;
		if(fast != high){
			slow = slow->next;
			fast = fast->next;
		}
	}
	return slow;
}
int binary(node *head,int n,int size){
	int l = 0,h = size-1,m;
	node *low = head;
	node *high = NULL;
	do{
		m = (l+h)/2;
		node *mid = mid_node(low,high);
		if(mid == NULL){
			return NULL;
		}
		if(mid->num == n){
			return m;
		}
		else if(mid->num < n){
			low = mid->next;
			l = m + 1;
		}
		else{
			high = mid;
			h = m - 1;
		}
	}while(low != high || high == NULL);
	return -1;
}
int main(){
	node *head;
	node *one;
	node *two;
	node *three;
	node *four;
	one =  new node();
	two = new node();
	three = new node();
	four =  new node();
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
	int n,index,ch,size;
	cout<<"1) Linear\n2) Binary"<<endl;
	cin>>ch;
	if(ch == 1){
		cout<<"Enter number : ";
		cin>>n;
		index = linear(head,n);
		if(index == -1){
			cout<<n<<" is not in the linked list";
		}
		else{
			cout<<n<<" is found in index number "<<index;
		}
	}
	else if(ch == 2){
		size = count(head);
		cout<<"Enter number : ";
		cin>>n;
		index = binary(head,n,size);
		if(index == -1){
			cout<<n<<" is not in the linked list";
		}
		else{
			cout<<n<<" is found in index number "<<index;
		}
	}
	else{
		cout<<"Invalid choice!";
	}
}