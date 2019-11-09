#include<iostream>
#include<limits>
using namespace std;
class demo
{

};
int main()
{
    string city,wheeler;
    cout<<"Enter name of city where you are stay: ";
    cin>>city;
    try
     {
         if(city=="mumbai"||city=="pune"||city=="bangalore"||city=="chennai")
         {
             cout<<city<<endl;
         }
         else
         {
            throw demo();
         }
     }
     catch(demo e)
     {
         cout<<"Enter the city between mumbai and pune and banglore and chennai"<<endl;
     }
    cout<<"Enter the type of wheeler: ";
    cin>>wheeler;
      try
     {
         if(wheeler=="4")
         {
             cout<<wheeler<<endl;
         }
         else
         {
            throw demo();
         }
     }
     catch(demo e)
     {
         cout<<"Enter the 4 wheeler"<<endl;
     }

   return 0;
}
