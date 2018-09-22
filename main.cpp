#include <iostream>

using namespace std;

void f(int n);
int main()
{
    int n;
    while(n)
    {
        cout<<"Enter n to draw Z letter : ";
        cin>>n;
        f(n);
    }
    return 0;
}

void f(int n)
{
    int counter=0;
    for(int i=0; i<=n; i++)
    {
        counter=0;

        for(int k=1; k<n-i; k++)
        {
            if(i==0)break;
            counter++;
            cout<<" ";
        }
        for(int j=0; j<n-i; j++)
        {

            if(counter<n)
            {
                cout<<"*";
                counter++;

            }
            if(i>0)
            {
                break;
            }
        }

        for(int l=n-1; l>0&&i==n-1; l--)
        {
            cout<<'*';
        }
        cout<<endl;
    }
}
