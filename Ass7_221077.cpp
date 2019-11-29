#include<iostream>
#include<list>
using namespace std;
void display(list<int>&l)
{
list<int>::iterator itr;
for(itr=l.begin();itr!=l.end();++itr)
{
cout<<*itr<<",";
cout<<" ";
}
}
int main()
{
	list <int>l1;
	list<int>l2(5);
	int no,value;
	std::cout<<"Enter the no of elements in list 1::";
	std::cin>>no;
		for(int i=0;i<no;i++)
		{
			std::cout<<"Enterthe value::";
			std::cin>>value;
			l1.push_back(value);
		}
		display(l1);
		list<int>::iterator itr2;
	for(itr2=l2.begin();itr2!=l2.end();++itr2)
	{
		*itr2=rand()/100;
	}

cout<<"List 1 element are::";
display(l1);
cout<<"list 2 element are::";
display(l2);
list<int>listA,listB;
listA=l1;
listB=l2;
l1.merge(l2);
cout<<"merge unsorted list::";
display(l1);
listA.sort();
listB.sort();
listA.merge(l2);
cout<<"merge sorted list::";
display(listA);
cout<<"reverse list::";
listA.reverse();
display(listA);
return 0;
}
