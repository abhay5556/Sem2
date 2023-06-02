#include <iostream>
using namespace std;

class node{
	public:int data ;
	node*prev ;
	node*next;
	node(int d,node*n=0 ,node*p=0){
		this->data=d;
		this->next=n;
		this->prev=p;
	}
};

class DLL{
	public: node*head,*tail;
	DLL(){head=tail=0;}
	void add_to_head(int x);
	void add_to_tail(int x);
	~DLL(){
		node*temp=head;
		while(head!=0){
			head=head->next;
			delete temp;
			temp=head;
		}
		tail=0;
	}
}; 
void DLL:: add_to_head(int x)
{
	node*p=new node(x);
	if (head==0)
		tail=head=p;
	else
	{
		p->next=head;
		head->prev=p;
		head=p;
	}
}
void DLL:: add_to_tail(int x)
{
	node*p= new node(x);
	if(head==0)
		tail=head=p;
	else{
	p->prev=tail;
	tail->next=p;
	tail=p;
	}
}
int main(){
	int n,ch;
	DLL linked_list;
	do{
		cout<<"press 1 for add to head\n";
		cout<<"press 2 for add to tail\n";
		cout<<"enter your choice";
		cin>>ch;
		switch(ch){
			case 1 : cout<<"element to be added at head\n";
						cin>>n;
						linked_list.add_to_head(n);
						break;
			case 2 : 
			cout<<"element to be added at tail\n";
						cin>>n;
						linked_list.add_to_tail(n);
						break;
		}
	} while(ch>=1 && ch<=2);
	return 0;
}
