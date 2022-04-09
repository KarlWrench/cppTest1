#include<iostream>
#include<stdio.h>  // 2nd change

using namespace std; // this is changed by master
void speedup()
{
	cout<<"this is speedup branch"<<endl;
}

int main()
{
	speedup();
	return 0;
}
