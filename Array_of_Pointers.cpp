#include<iostream.h>
#include<constream.h>
class A
{
public:
virtual void show()
{
 cout<<“A\n”;
}
};
class B : public A
{
public:
void show()
 {
 cout<<“B\n”;
 }
};
class C : public A
{
 public:
 void show()
 {
 cout<<“C\n”;
 }
};
class D : public A
{
 public:
 void show()
 {
 cout<<“D\n”;
 }
};
class E : public A
{
public:
 void show()
 {
 cout<<“E”;
 }
};
void main()
{
clrscr();
A a;
B b;
C c;
D d;
E e;
A *p a[]={&a,&b,&c,&d,&e};
for ( int j=0;j<5;j++)
pa[j]->show();
}
