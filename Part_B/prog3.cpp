#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int x,n;
    stack <int> s;
    cout<<"Enter the number of items: ";
    cin>>n;
    cout<<"Enter the items: ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.push(x);
    }
    cout<<"The items are: ";
    for(int i=0;i<n;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}