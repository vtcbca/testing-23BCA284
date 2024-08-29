/*Write a proram to print five student detail.
id:23bca284
date:18 july 2024*/
#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int id;
	char name[20];
	void print()
	{
		cout<<"print detials";
	}
};
int main()
{
	clrscr();
	int i,n;
	student s1;
	cout<<"enter n value:";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		cout<<"enter id:"<<i;
		cin>>s1.id;
		cout<<"enter name:"<<i;
		cin>>s1.name;
	}
	s1.print();
	getch();
	return 0;
}


