#include <iostream>  //single inheritance
 using namespace std;
 
 class parent
 {
 	public: void parenting()
 	{
 		cout<<"A";
	 }
 };
 
 class child : public parent
 {
 		public: void children()
		 {
		 	cout<<"B";
		 }
	 
 };
 
 int main()
{
   child obj;
   obj.parenting();
   obj.children();
   }

