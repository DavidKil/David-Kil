#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;


class bankloan

{
private:
string name;
int d;


public:
void setbank(string, int);
void setname();
void setyear();
void showbalance();
void setdeposit();


void bankloan::setbank(string name, int d)
{
	myname  = name;
	depos = d;
}

void bankloan::setname()
{
cout<<"\nEnter your name:";
cin>>myname;

}


void bankloan::setdeposit()
{
cout<<"\nPlease enter how much you wish to deposit";
cin>>depos;

}