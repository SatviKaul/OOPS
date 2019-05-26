#include<iostream.h>
#include<conio.h>
class B;
class A
{
 int a;
 public:
 A(int a1)
 {
  a = a1;
 }
 friend void max(A c , B d);
};
class B
{
 int b;
 public:
 B(int b1)
 {
  b = b1;
 }
 friend void max(A c , B d);
};
void max(A c , B d)
{
 if(c.a > d.b)
 {
  cout<<"Class A is greater\n";
 }
 else
 {
  cout<<"Class B is greater\n";
 }
}
void main()
{

  int x,y;
  clrscr();
  cout<<"Enter for Class A\n";
  cin>>x;
  A obj1(x);
  cout<<"Enter for Class B\n";
  cin>>y;
  B obj2(y);
  max(obj1 , obj2);
  getch();
}
