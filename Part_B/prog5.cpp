#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector <int> v;
    cout<<"Enter the number of elements in the vector: ";
    cin>>n;
    cout<<"Enter the elements of the vector: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"The elements of the vector are: ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"Deleted element is: "<<v.back()<<endl;
    v.pop_back();
    cout<<endl;
    cout<<"The size of the vector is: "<<v.size()<<endl;

}