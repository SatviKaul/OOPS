#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
class String
{
	char a[50];
	public:
	String()
	{
		strcpy(a," ");
	}
	String(char temp[50])
	{
		strcpy(a,temp);
	}
	String operator +(String &temp_s)
	{
		String temp1;
		strcpy(temp1.a,strcat(a,temp_s.a));
		return(temp1);
	}
	String operator =(String & temp_s)
	{
		String temp2;
		strcpy(temp2.a,strcpy(a,temp_s.a));
		return(temp2);
	}
	void operator <=(String & temp_s)
	{
		String temp3;
		int len1=strlen(temp_s.a);
		int len2=strlen(a);
		if(len1<len2)
		{
			cout<<"TRUE"<<endl;
		}
		else
		{
			cout<<"FALSE"<<endl;
		}
	}
	void len()
	{
		cout<<"Length"<<strlen(a)<<endl;
	}
	void tlower()
	{
		int i, in;
		for(i=0;i<strlen(a);i++)
		{
			in=a[i];
			if(in>=65&&in<=90)
			{
				in=in+32;
				a[i]=in;
			}
		}
	}
	void tupper()
	{
		int i, in;
		for(i=0;i<strlen(a);i++)
		{
			in=a[i];
			if(in>=97&&in<=122)
			{
				in=in-32;
				a[i]=in;
			}
		}
	}

void disp()
{
	puts(a);
}
};
void main()
{
char str[100],str1[100],str2[100];
int c;
clrscr();
cout<<"\nMENU\n1.Overload +\n2.Overload =\n3.Overload <\n4.Length\n5.Upper to Lower\n6.Lower to Upper"<<endl;
cout<<"Enter your choice"<<endl;
cin>>c;
if(c==1||c==3)
{
	cout<<"Enter string"<<endl;
	gets(str);
	cout<<"Enter String"<<endl;
	gets(str1);
}
else
{
	cout<<"Enter String"<<endl;
	gets(str2);
}
switch(c)
{
	case 1: String obj(str);
		String obj1(str1);
		String obj2;
		obj2=obj1+obj;
		obj2.disp();
		break;
	case 2: String obj3(str2);
		String obj4;
		obj4=obj3;
		obj4.disp();
		break;
	case 3: String obj5(str);
		String obj6(str1);
		obj5<=obj6;
		break;
	case 4: String obj7(str);
		obj7.len();
		break;
	case 5: String obj8(str);
		obj8.tlower();
		obj8.disp();
		break;
	case 6: String obj9(str);
		obj9.tupper();
		obj9.disp();
		break;
	default: break;
}
getch();
}
