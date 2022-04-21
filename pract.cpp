#include<iostream>
using namespace std;
class Employee
			{
				private:
				int id;
				string name;
				int salary;
				public:
				void input()
				{
					cout<<"Enter the name of the employee : "<<endl;
					getline(cin,name);
					fflush(stdin);
					cout<<"Enter the ID of the employee"<<endl;
					cin>>id;
					fflush(stdin);
					cout<<"Enter the salary of the employee : "<<endl;
					cin>>salary;
					fflush(stdin);
				}
				void display()
				{
					cout<<"The details of the Employee with highest salary is : "<<endl;
					cout<<"The name of the employee is : "<<name<<endl;
					cout<<"The ID of the employee is : "<<id;
					cout<<"The Salary of the employee is : "<<salary<<endl;
				}
				friend Employee calculation(Employee A[]);
			};
Employee calculation(Employee A[])
{
	int i=0,j=0;
	Employee temp;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++);
		{
			if(A[i].salary>A[j].salary)
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
	return A[0];
}
int main()
{
	int i=0,j=0;
	Employee obj[5],temp;
	cout<<"Enter the details of the employee : "<<endl;
	for(i=0;i<5;i++)
	{
		obj[i].input();
	}
	temp=calculation(obj);
	temp.display();
	return 0;
}
