#include<iostream>   //hybrid inheritance
using namespace std;
 
 class father
 {
 	public: void A()
 	{
 		cout<<"I AM FATHER"<<endl;
	 }
 };
 
 class son : public father
 {
 	public: void B()
 	{
 		cout<<"I AM SON"<<endl;
	 }
 };
 
  class daughter : public father
 {
 	public: void C()
 	{
 		cout<<"I AM  daughter "<<endl;
	 }
 };
 
 class child : public son, public daughter
 {
 	public : void D()
 	{
 		cout<<"I AM CHILD "<<endl;
	 }
 };
 
 
 int main()
 {
 
child obj;
 
 obj.B();
 obj.C();
 obj.D();
}
