#include<iostream>   //Multilevel Inheritance
using namespace std;

class A
{
	public: void getA()
	{
		cout<<"A"<<endl;
	}
};
class B: public A
{
	public: void getB()
	{
		cout<<"B"<<endl;
	}
};
class C: public B
{
	public: void getC()
	{
		cout<<"C"<<endl;
	}
};
class D: public C
{
	public: void getD()
	{
		cout<<"D"<<endl;
	}
};

int main()
{
	D obj;
	obj.getA();
   	obj.getB();
	obj.getC();
	obj.getD();	
	}

