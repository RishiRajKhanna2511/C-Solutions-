#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(2*n);j++)
            if(j<=n-i)
                cout<<" ";
            else if((j=n-i+1)||(j=n+i-1))
                cout<<"*";

    }
    
    cout<<endl;
     for(int i=n;i<=1;i--)
    {
        for(int j=1;j<=(2*n);j++)
            if(j<=n-i)
                cout<<" ";
            else if((j=n-i+1)||(j=n+i-1))
                cout<<"*";

    }
    cout<<endl;
    return 0;
}

    