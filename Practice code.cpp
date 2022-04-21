//assume that a bank maintains 2 accounts saving and current for customer. saving account compound int 10 % per year current account holder 5 % SI create a class account that stores customer name and account number .from this derive the classes current-_acc and saving_acc. Include necessary member functions and calculate the total amount of money in an account for both type of customers.
#include<iostream>
#include<cmath>
using namespace std;
class Account
			{
				protected:
				int account_number;
				string name;
				public:
					void setdata()
									{
										cout<<"Enter the name of the customer : "<<endl;
										getline(cin,name);
										fflush(stdin);
										cout<<"Enter the account number of the customer : "<<endl;
										cin>>account_number;
										fflush(stdin);
									}
				void display()
								{
									cout<<"The name of the customer is : "<<name<<endl;
									cout<<"The account number of the customer is : "<<account_number<<endl;	
									}	
			};
class current_acc : public Account
								{
									private:
									float simple_interest;
									float p;
									float t;
									float amount;
									static float rate;
									public:
									void input()
									{
										cout<<"Enter your Bank Balance : "<<endl;
										cin>>p;
										cout<<"Enter the Time period in years : "<<endl;
										cin>>t;
									}
									void calculation()
									{
										simple_interest=(p*t*rate)/100;
										amount=p+simple_interest;
									}
									void display()
									{
										cout<<"The amount of Simple Interest is : "<<simple_interest<<endl;
										cout<<"The total balance of your account including Simple Interest is : "<<amount<<endl;
									}	
								};
float current_acc :: rate=5;
class saving_acc : public Account
{

								private:
									float compound_interest;
									float amount;
									float p;
									float t;
									static float rate;
									public:
									void input()
									{
										cout<<"Enter your Bank Balance : "<<endl;
										cin>>p;
										cout<<"Enter the Time period in years : "<<endl;
										cin>>t;
									}
									void calculation()
									{
										compound_interest=p*pow((1+rate/100),t)-p;
										amount=p+compound_interest;
									}		
									void display()
									{
										cout<<"The amount of Compound Interest is : "<<compound_interest<<endl;
										cout<<"The total balance of your account including Compound Interest is : "<<amount<<endl;
									}
								};
float saving_acc :: rate=10;
int main()
{
	int choice;
	Account obj1;
	current_acc obj2;
	saving_acc obj3;
	obj1.setdata();
	flag:
	cout<<"Please enter your choice for : "<<endl;
	cout<<"1 : Simple Interest"<<endl;
	cout<<"2 : Compound Interest"<<endl;
	cin>>choice;
	if(choice!=1 && choice!=2)
	{
		cout<<"The entered choice is invalid"<<endl;
		goto flag;
	}
	else
	{
	switch(choice)
		{
		case 1 :	obj2.input();
					obj1.display();
					obj2.calculation();
					obj2.display();
					break;
		case 2 :	obj3.input();
					obj1.display();
					obj3.calculation();
					obj3.display();				
					break;
		}
	}
	return 0;
}
