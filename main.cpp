#include <iostream>

using namespace std;
int lastIndex(int b[],int a,int d,int i)
{

    if(a==0)
    {
        return i;
    }
    else if(b[0]==d)
    {
        i=a;
        lastIndex(b+1,a-1,d,i);
    }
    else
    {
        lastIndex(b+1,a-1,d,i);
    }
}
int main()
{
    while(1)
    {
        cout<<"Hit 1 to continue or any other button to exit"<<endl;
        int e;
        cin>>e;
        if(e==1)
        {
            int a;
            int i=-1;
            cout<<"Enter the size of the array"<<endl;
            cin>>a;
            int b[a];
            for(int i=0; i<a; i++)
            {
                cout<<"Enter the value for index "<<i<<" : "<<endl;
                cin>>b[i];
            }
            int d;
            cout<<"Enter the element to search"<<endl;
            cin>>d;
            int c=lastIndex(b,a,d,i);
            if(c==-1)
            {
                cout<<"\nElement is not present in the array\n"<<endl;
            }
            else
            {
                cout<<"\nElement "<<d<<" is present at last index of : "<<a-c<<"\n"<<endl;
            }

        }
        else
        {
            break;
        }
    }

}
