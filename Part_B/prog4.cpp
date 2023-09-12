#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int n,x;
    queue <int> q;
    cout<<"Enter the number of items: ";
    cin>>n;
    cout<<"Enter the items: ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        q.push(x);
    }
    cout<<"The items are: ";
    for(int i=0;i<n;i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}