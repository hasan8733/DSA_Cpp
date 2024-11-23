#include <iostream>
using namespace std;
class node{
	public:
		int num;
		node *l;
		node *r;
};
node *create_node(int data){
	node *n;
	n = new node();
	n->num = data;
	n->l = NULL;
	n->r = NULL;
	return n;
}
int search(node *root,int s){
	if(root!=NULL){
		if(root->num == s){
			return root->num;
		}
		else if(root->num>s){
			search(root->l,s);
		}
		else{
			search(root->r,s);
		}
	}
	else{
		return NULL;
	}
}
int main(){
	int s,f;
	node *p;
	node *p1;
	node *p2;
	node *p1l;
	node *p1r;
	p = create_node(8);
	p1 = create_node(6);
	p2 = create_node(9);
	p1l = create_node(3);
	p1r = create_node(7);
	p->l = p1;
	p->r = p2;
	p1->l = p1l;
	p1->r = p1r;
	cout<<"Enter number for search : ";
	cin>>s;
	f = search(p,s);
	if(f == NULL){
		cout<<"Not found";
	}
	else{
		cout<<f;
	}
}