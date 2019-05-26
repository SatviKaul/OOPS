#include <iostream.h>
#include <conio.h>
class lists
{
	int k;
	public:
	virtual void store()
	{
		cout<<"Enter value for list"<<endl;
	}
	virtual void retrieve()
	{
		cin>>k;
	}
};
class queue: public lists
{
	int q;
	public:
	void store()
	{
		cout<<"Enter value for list"<<endl;
	}
	void retrieve()
	{
		cin>>q;
	}
};
class stack: public lists
{
	int s;
	public:
	void store()
	{
		cout<<"Enter value for list"<<endl;
	}
	void retrieve()
	{
		cin>>s;
	}
};
void main()
{
	clrscr();
	lists l; queue q; stack s;
	lists* ptr;
	ptr=&l;
	ptr->store();
	ptr=&q;
	ptr->store();
	ptr=&s;
	ptr->store();
	ptr=&l;
	ptr->retrieve();
	ptr=&q;
	ptr->retrieve();
	ptr=&s;
	ptr->retrieve();
	getch();
}
