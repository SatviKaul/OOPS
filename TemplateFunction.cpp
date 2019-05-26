#include <iostream.h>
#include <conio.h>
template <class T>
void square(T a)
{
	T b= a*a;
	cout<<"Square"<<b<<endl;
}
int main()
{
	clrscr();
	int a;
	float b;
	cout<<"Enter integer number"<<endl;
	cin>>a;
	cout<<"Enter float number"<<endl;
	cin>>b;
	square(a);
	square(b);
	getch();
}
