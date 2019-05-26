#include <iostream.h>
#include <conio.h>
template<class T>
class A
{
	int a;
	int b;
	public:
	A(T x, T y)
	{
		a=x;
		b=y;
	}
	void bigger()
	{
		if(a>b)
		{
			cout<<"The bigger number is"<<a<<endl;
		}
		else
		{
			cout<<"The bigger number is"<<b<<endl;
		}
	}
};
int main()
{
	clrscr();
	int a,b;
	float g,h;
	cout<<"Enter two integers"<<endl;
	cin>>a>>b;
	cout<<"Enter two floats"<<endl;
	cin>>g>>h;
	A<int> obj(a,b);
	obj.bigger();
	A<float> obj1(g,h);
	obj1.bigger();
	getch();
}
