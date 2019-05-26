#include <conio.h>
#include <iostream.h>
class Complex
{
	private:
	int real;
	int imag;
	public:
	Complex()
	{
		real=0;
		imag=0;
	}
	Complex(int a)
	{
		imag=a;
		real=a;
	}
	Complex(int a, int b)
	{
		real=a;
		imag=b;
	}
	Complex add(Complex x)
	{
		Complex y;
		y.real=x.real+real;
		y.imag=x.imag+imag;
	}
	void disp()
	{
		cout<<"Sum of numbers is"<<real<<"+i"<<imag<<endl;
	}
};
void main()
{
clrscr();
int i,j,k;
cout<<"Enter real and imaginary part of 1st number"<<endl;
cin>>i;
cout<<"Enter real and imaginary part of 2nd number"<<endl;
cin>>j>>k;
Complex m(i);
Complex n(j,k);
Complex f(i);
f=n.add(m);
f.disp();
getch();
}
