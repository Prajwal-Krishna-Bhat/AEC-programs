#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> map;
    int n;
    cout<<"Enter number of items: ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        string s;
        int k;
        cin>>s>>k;
        map[s]=k;
    }
    cout<<"UNORDERED MAP"<<endl;
    for(auto a:map)
    {
        cout<<"key: "<<a.first<<"Value: "<<a.second;
    }
}