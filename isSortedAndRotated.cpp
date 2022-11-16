#include<bits/stdc++.h>
using namespace std;

bool isSortedAndRotated(vector<int> v)
{
    int n = v.size();
    int count = 0; // for countaing pairs
    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])  // count the number of pairs where arr[i-1] > arr[i]
          count++;

    }
    if(v[n-1] > v[0]) // compairing the (last elemnt > first element)
      count++;

    return (count<=1); // if count = 0/1 true, else false
}

int main()
{
    vector<int> v1 = {1,2,3,4,5}; //true, here pair = 1
    vector<int> v2 = {3,4,5,1,2}; //true here pair = 1
    vector<int> v3 = {2,1,3,4}; //false here pair = 2
    vector<int> v4 = {1,1,1,1}; //true here pair = 0
    (isSortedAndRotated(v1)) ? cout<<"True" : cout<<"False";
    cout<<endl;
    (isSortedAndRotated(v2)) ? cout<<"True" : cout<<"False";
     cout<<endl;
    (isSortedAndRotated(v3)) ? cout<<"True" : cout<<"False";
     cout<<endl;
    (isSortedAndRotated(v4)) ? cout<<"True" : cout<<"False";
     return 0;

}