#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int> v;
	int n, ch=1, temp;

	cout<<"Enter the size of the vector: "<<endl;
	cin>>n;

	cout<<"Enter the elements of the vector: ";
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		v.push_back(temp);	
	}

	while(ch!=0){
	cout<<"\n1.Modify\n2.Multiply\n3.Display\n4.Exit\n";
	cout<<"Enter the option: ";
	cin>>ch;

	switch(ch){
		case 1:
			int pos, e;
			cout<<"Enter postion to modify: ";
			cin>>pos;
			if(pos<n){
				cout<<"Enter new element: ";
				cin>>e;

				v[pos] = e;
			}
			else{
				cout<<"\nInvalid Position!";
			}

			break;

		case 2:
		{
			int sval;
			cout<<"\nEnter an scalar value: ";
			cin>>sval;
			
			for(int i = 0; i < v.size(); i++){
				v[i] = v[i] * sval;
			}
			break;
		}
		case 3:
			for(auto &i:v)
				cout<<i<<",";
			break;
		case 4:
			exit(0);

	}

}


	return 0;
}