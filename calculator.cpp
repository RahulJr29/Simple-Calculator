#include<iostream>
using namespace std;
class Calculator{
	private: float a,b;
	public: void input();
			void add();
			void sub();
			void mul();
			void div();
			void req();
};
void Calculator::input()
{
	cout<<"\nEnter two values:";
	cin>>a>>b;
}
void Calculator::add()
{
	float c;
	c=a+b;
	cout<<"\nAddition of two values: "<<c;
}
void Calculator::sub()
{
	float c;
	c=a-b;
	cout<<"\nSubtraction of two values: "<<c;
}
void Calculator::mul()
{
	float c;
	c=a*b;
	cout<<"\nMultiplication of two values: "<<c;
}
void Calculator::div()
{
	float c;
	c=a/b;
	cout<<"\nDivision of two values: "<<c;
}
void Calculator::req()
{
	char ch;
	loop:cout<<"\nIf you want to continue Press 'y' and if you don't Press 'n':";
	cin>>ch;
	if(ch=='y')
		return;
	if(ch=='n')
		exit(0);
	else
		cout<<"\nPlease choose between 'y' or 'n'\n";
		goto loop;
}
int main()
{
	Calculator cal;
	int ch;
	while(1)
	{
		cal.input();
		cout<<"\nPress 1 for addition\nPress 2 for subtraction\nPress 3 for multiplication\nPress 4 for division\nPress 5 for exit";
		cout<<"\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1: cal.add();
					cout<<"\n******************************************";
					cal.req();
					break;
			case 2: cal.sub();
					cout<<"\n******************************************";
					cal.req();
					break;
			case 3: cal.mul();
					cout<<"\n******************************************";
					cal.req();
					break;
			case 4: cal.div();
					cout<<"\n******************************************";
					cal.req();
					break;
			case 5: exit(0);
			default: cout<<"\nWrong Input";
                     cout<<"\n******************************************";
		}
	}
	return 0;
}
