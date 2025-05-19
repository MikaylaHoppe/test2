#include <iostream>
#include <string>
#include "head.h"
using namespace std;

int main()
{
	AddressBook stu[4];
	string a,b,c,d;
	for(int i=0;i<4;i++)
	{
		cin>>a>>b>>c>>d;
		stu[i].SetName(a);
		stu[i].SetSchool(b);
		stu[i].SetNum(c);
		stu[i].SetBox(d);
	}
	for(int i=0;i<4;i++)
	{
		stu[i].print();
	}
	return 0;
}

