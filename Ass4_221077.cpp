#include<iostream>
#include<limits>
using namespace std;
template <class T>
T selection()
{
    T arr[100];
    T temp;
    int n,j;
    cout<<"Enter the how many number you want entered::";
    cin>>n;
    cout<<"Enter the element in array::";
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        int  midindex=i;
       for(j=i+1;j<n;j++)
       {
           if(arr[j]<arr[midindex])
           midindex=j;
       }
       temp=arr[i];
       arr[i]=arr[midindex];
       arr[midindex]=temp;

    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}
int main()
{
cout<<"Integer sorting::"<<endl;
selection<int>();
cout<<"Float sort::"<<endl;
selection<float>();
    return 0;
}
