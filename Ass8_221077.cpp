#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	char ch;
	fstream f;
	f.open("first.txt",ios::out);
	if(!f)
	{
	cout<<"Enter the opening file";
	return 0;
	}
	cout<<"file reated !!!";
	f<<"SY BTECH computer division A ,batch A-3,VIIT pune "<<endl;
	f.close();
	f.open("first.txt",ios::in);
	if(!f)
	{
	cout<<"Error opening file";
	return 0;
	}
	while(!f.eof())
	{
	f>>ch;
	cout<<ch;
	}
	f.close();;
	return 0;
}
