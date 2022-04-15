//assume that a bank maintains 2 accounts saving and current for customer. saving account compound int 10 % per year current account holder 5 % SI create a class account that stores customer name and account number .from this derive the classes current-_acc and saving_acc. Include necessary member functions and calculate the total amount of money in an account for both type of customers.
#include<iostream>
using namespace std;
class Account
			{
				protected:
				int account_number;
				char name[30];
				public:
				void setdata()
				{
					cout<<"Enter the name of the customer : "<<endl;
					
					cout<<"Enter the account number of the customer : "<<endl;
					cin>>account_number;
				}
				virtual void display();
			};
class current_acc : public Account
								{
									private:
									int p;
									int t;
									float simple_interest;
									float amount;
									static int rate;
									public:
									void input()
									{
										cout<<"Enter the Principle : "<<endl;
										cin>>p;
										cout<<"Enter the Time period"<<endl;
										cin>>t;	
									}
									void calculation()
									{
										simple_interest=(p*t*rate)/100;
										amount=p+simple_interest;
									}	
									void display()
									{
										cout<<"The Simple Interest is : "<<amount;
									}	
								};
int current_acc :: rate=5;
class saving_acc : public Account
{

								private:
									int p;
									int t;
									float compound_interest;
									float amount;
									static int rate;
									public:
									void input()
									{
										cout<<"Enter the Principle : "<<endl;
										cin>>p;
										cout<<"Enter the Time period"<<endl;
										cin>>t;	
									}
									void calculation()
									{
									
										amount=p+compound_interest;
									}		
									void display()
									{
										cout<<"The Compound interest is : "<<amount;
									}
								};
int saving_acc :: rate=10;
int main()
{
	current_acc obj1;
	obj1.setdata();
	return 1;
}
