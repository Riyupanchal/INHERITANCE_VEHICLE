#include<iostream>   //hierarchiical inheritance
using namespace std;

class grandfather
{
	public: void grandfather()
	{
		cout<<"HE IS MY GRANDFATHER"<<endl;
	}
};

class father :public grandfather
{
	public: void father()
	{
		cout<<"HE IS MY FATHER"<<endl;
	}
};


class child :public grandfather
{
	public: void child()
	{
		cout<<"I AM CHILD"<<endl;
	}
};


int main()
{
    father obj;
    child obj;
     
    obj.grandfather();
    obj.father();
    
    obj.grandfather();
    obj.child();
    
}
