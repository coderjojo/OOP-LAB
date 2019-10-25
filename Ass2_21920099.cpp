/*Implement a class Complex which represents the Complex Number data type.
Implement
the following operations:
1. Constructor (including a default constructor which creates the complex number
0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read Complex Numbers.*/

#include<iostream>
using namespace std;
class complex
{
	float x;
	float y;
	public:
	complex()
	{
		x=0;
		y=0;
	}

	complex operator+(complex);
	complex operator*(complex);

	friend istream &operator >>(istream &input,complex &t)
	{
		cout<<"Enter the real part: ";
		input>>t.x;
		cout<<"Enter the imaginary part: ";
		input>>t.y;
	}

	friend ostream &operator <<(ostream &output,complex &t)
	{
		output<<t.x<<"+"<<t.y<<"i\n";
	}
};

complex complex::operator+(complex c)
{
	complex temp1;
	temp1.x=x+c.x;
	temp1.y=y+c.y;
	return(temp1);
}

complex complex::operator*(complex c)
{
	complex temp;
	temp.x=(x*c.x)-(y*c.y);
	temp.y=(y*c.x)+(x*c.y);
	return (temp);
}

int main()
{
	complex c1,c2,c3,c4;
	cout<<"Default constructor value =\n";
	cout<<c1;
	cout<<"\nEnter the 1st number: \n";
	cin>>c1;
	cout<<"\nEnter the 2nd number: \n";
	cin>>c2;
	c3=c1+c2;
	c4=c1*c2;
	cout<<"\nThe First number is: ";
	cout<<c1;
	cout<<"\nThe Second number is: ";
	cout<<c2;
	cout<<"\nThe Addition is: ";
	cout<<c3;
	cout<<"\nThe Multiplication is: ";
	cout<<c4;
return 0;
}