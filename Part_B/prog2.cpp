#include<iostream>
#include <unordered_set>
#include <string>
using namespace std;
int main()
{
    unordered_set<string> set;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        string element;
        cin >> element;
        set.insert(element);
    }
    cout << "Unordered Set: ";
    for (auto element : set)
    {
        cout << element << endl;
    }
    cout << endl;
}