#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	public:
	void setValue(int c)
	{
		x=c;
		cout<<"X = "<<x<<endl;
	}
};
class B : public A
{
	public:
	int y,sum;
	public:
	void getData(int v)
	{
		y=v;
		cout<<"Y = "<<y<<endl;
	}
	void add()
	{
		sum=x+y;
	}
	void display()
	{
		cout<<"The sum is : "<<sum<<endl;
	}
};
int main()
{
	B obj2;
	obj2.setValue(5);
	obj2.getData(10);
	obj2.add();
	obj2.display();
}
