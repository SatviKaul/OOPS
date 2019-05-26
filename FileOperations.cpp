#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 ofstream fout;
 char line[100],a;
 cout<<"Enter String : \n";
 gets(line);
 fout.open("File.txt",ios::out);
 if(!fout)
 {
  cout<<"Error creating File";
 }
 else
 {
  for(int i=0;line[i]!='\0';i++)
  {
   fout.put(line[i]);
  }
 }
 fout.close();
 ifstream fin;
 ofstream fout1;
 fin.open("File.txt",ios::in,ios::out);
 fout1.open("SFile.txt",ios::out);
 cout<<"Modifying File\n";
 while(!fin.eof())
 {
  fin.get(a);
  if(a!=' '&&a!='!'&&a!='.'&&a!='\n'&&a!='\t')
  {
   cout<<a;
   fout.put(a);
  }
 }
 fin.close();
 fout1.close();
 getch();
}
