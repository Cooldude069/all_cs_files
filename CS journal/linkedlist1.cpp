#include<bits/stdc++.h>
using namespace std;
class linked
{
	struct node 
	{
		struct node *next;
		int data;
	} ;
	struct node *start;
	public:
		linked ()
		{
			start=NULL;
		}
		void insertend()
		{
			struct node *temp, *t;
			temp = new node;
			cout<<"enter the data ";
			cin>>temp->data;
			temp->next = NULL;
			
			if(start ==NULL)
			    start =temp;
			else
			{
				t=start;
				while(t->next !=NULL)
					t=t->next;
				
				t->next = temp;
				
			}
		}
		void insertbeg()
		{
			struct node *temp;
			temp = new node;
			cout<<"enter the data ";
			cin>>temp->data;
						
			temp->next = start;
			start = temp;
		
		}
		void insertafter()
		{
			int ele;
			struct node *temp, *t;
			temp = new node;
			cout<<"enter the data ";
			cin>>temp->data;
			
			cout<<"insert ele";
			cin>> ele;
			
			if(start == NULL)
				start = temp;
			else
			{
					
			t= start;
			while(t)
			{
				if(t->data == ele)
				{
					temp->next = t->next ;
					t->next = temp;
				}
				t= t->next;
			}
		}
	}
	void insertbefore()
	{
		struct node *temp, *t;
		int ele;
			temp = new node;
			cout<<"enter the data ";
			cin>>temp->data;
			
			cout<<"enter the ele";
			cin>>ele;
			
			t= start;
			while(t)
			{
				
				if(t->next->data ==ele)
				{
					temp->next = t->next;
					t->next = temp;
					return;
				}
				t=t->next;			
			}
	}
		void display()
		{
			struct  node *t;
			t= start ;
			
			while(t)
			{
				cout<<t->data;
				t=t->next;	
			}	
				
		}
		void deletebeg()
		{
			struct node *t ;
			t = start;
			start = start->next;
			delete(t);
				
		}
		void deleteend()
		{
			struct node *t , *temp;
			t = start;
			
			while(t->next->next != NULL)
			t = t->next;
			
			temp = t->next;
			
			t->next = NULL;
			cout<<"The deleted item is "<<temp->data<<"\n";
			delete(temp);
		
			
		}
		void deleteafter()
		{
			struct node *t ;
			int ele;
			cout<<"Enter the element before the one to be deleted";
			cin>>ele;
			
			
			t = start;
			
			
			while(t->data != ele)
			{
				t = t->next;
			}
			
			struct node *temp = new node;
			
			temp = t->next->next;
			free(t->next);
			t->next = temp;
			delete(temp);
			
			cout<<"Process executed successfully\n";
			return;
		}
		void deleteelm()
		{
			struct node *t , *temp;
			int ele;
			
			cout<<"Enter the element to be deleted";
			cin>>ele;
			
			while(t->data != ele)
			{
			t = t->next;}
			
			temp = new node;
			
			temp = t->next;
			free(t);
			t = temp;
			delete(temp);
			return;
		}
};
int main()
{
	int choice;
	linked l;
	do
	{
		cout<<"Please respond using the respective numbers\n1->to insert end\n2->to display\n3->to insert beg\n4->to insert after\n5->to insert before\n6->to delete beg\n7->to deleteafter\n8->to delete specific element\n9->to exit\n->";
		cin>>choice;
		switch(choice)
		{
			case 1 :
				l.insertend();
				break;
			case 2:
				l.display();
				break;
			case 3: 
				l.insertbeg();
				break;
			case 4:
				l.insertafter();
				break;
			case 5 :
				l.insertbefore();
				break;
			case 6:
				l.deletebeg();
				break;
			case 7:
				l.deleteafter();
				break;
			case 8:
				l.deleteelm();
				break;
				
		}
	}while(choice<=8);
}
