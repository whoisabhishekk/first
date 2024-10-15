#include<iostream>

using namespace std;

int main()
{
    int a[10];

    
    for(int i=0;i<10;i++)
    {
        cout<<"enter elements:-";
        cin>>a[i];
        
    }
    int maxi=INT_MIN;
    for(int i=0;i<10;i++)
    {
        maxi=max(maxi,a[i]);

        
    }
    for(int i=0;i<10;i++)
    {
          
    }
    cout<<endl<<"minimum value is:-"<<maxi;
    return 0;
}