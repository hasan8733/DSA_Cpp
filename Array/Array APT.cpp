#include <iostream>
using namespace std;
class MyArray{
	int total_size;
	int used_size;
	int *ptr;
	public:
		MyArray(int t_size,int u_size){
			total_size = t_size;
			used_size = u_size;
			ptr = new int(t_size);
		}
		void input(){
			for(int i=0;i<used_size;i++){
				cout<<"Enter "<<i+1<<" element : ";
				cin>>ptr[i];
			}
		}
		void show(){
			for(int i=0;i<used_size;i++){
				cout<<"Element "<<i+1<<" : "<<ptr[i]<<endl;				
			}
		}
};
int main(){
	MyArray marks(5,3);
	marks.input();
	marks.show();
}