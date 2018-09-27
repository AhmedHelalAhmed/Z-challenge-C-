#include <iostream>

using namespace std;

void f(int n);
int main()
{

    int n;
    cout<<"Enter n to draw Z letter : ";
    cin>>n;
    f(n);
    return 0;
}


void f(int n)
{
    int flag = 1;
    int j=0;

    for(int i=1; i<=n; i++)
    {
        j++;
        if(i==1||n+1-i == j||i==n)
        {
            cout<<'*';
        }
        else
        {
            cout<<' ';
        }
        if( j==n)
        {
            cout<<endl;
            j=0;
        }
        else
        {
            i--;
        }

        if(i==n)
        {
            cout<<"Enter n to draw Z letter : ";
            cin>>n;
            if(n)
            {
                i=0;
            }
        }


    }

}



