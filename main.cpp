#include <iostream>

using namespace std;

void f(int n);
int main()
{
    /*
    //optimze #1 and #2
    int n;
    while(n)
    {
        cout<<"Enter n to draw Z letter : ";
        cin>>n;
        f(n);
    }

    */
    // optimze #3
    int n;
    cout<<"Enter n to draw Z letter : ";
    cin>>n;
    f(n);
    return 0;
}

//optimze #3
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






// optimze #2
/*
void f(int n)
{
    int flag = 1;
    int j=0;
    int counter = 0 ;
    int k=0;
for(int i=1; i<=n; i++)
{
    k++;
    if(i==1||n+1-i == k||i==n)
    {
        cout<<'*';
    }
    else
    {
        cout<<' ';
    }
    if( k==n)
    {
        cout<<endl;
        k=0;
    }
    else
    {
        i--;
    }



}

    }

       */




//optimize #1
/*
void f(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {

            if(n+1-i == j||i==1||i==n)
            {
                cout<<'*';
            }
            else
            {
                cout<<' ';
            }

        }
    cout<<endl;
    }


}

*/
/*
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
*/
