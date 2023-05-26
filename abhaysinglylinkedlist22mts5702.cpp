#include <iostream>
using namespace std;

class node{
	public:
		int data;
		node*next;
		node(int data,node*p=0){ 
		this->data=data;
		this->next =p;
		}
};
class SLL 
{
	node*head;
	public: 
	
		SLL(){head=0;}
		void add_to_head(int x);
		void display();
		int count();
		void insert( int x, int index);
		~SLL(){
			node*temp=head;
			while(head!=0)
				{head= head->next;
				delete temp;
				temp=head;
				}
		}
};
void SLL:: display()
	{node*p=head;
	 while(p!=0)
	 	{cout << p->data<< " ";
		 p=p->next;
		}
}
void SLL :: add_to_head(int x){
	node*p=new node(x);
	if (head==0){
		head=p;
	}else{
		p->next=head;
		head=p;
	}
}
int SLL:: count(){
	node*p=head;
	int count=0;
	while(p!=0){
	count+=1;
	p=p->next;}
	return count;
}

int main()
{
	int a,ch;
	SLL linked_list;
	do{
		cout<<"menu\n";
		cout<<"1........for add_to_head\n";
		cout<<"2........for display\n";
		cout<<"3........for count\n";
		cout<<"enter your choice\n";
		cin>>ch;
		switch(ch){
		case 1 : cout<<"element to be added at head\n";
				 cin>>a;
				 linked_list.add_to_head(a);
				 break;
		case 2 : cout<<"displaying the list\n";
				 linked_list.display();
				 break;
		case 3 : cout<<"counting the elements in list\n";
				 cout<<linked_list.count();
				 break;
		}
		}while(ch >=1 && ch <=3);
		return 0;
}
