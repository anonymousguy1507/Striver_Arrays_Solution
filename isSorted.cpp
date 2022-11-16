#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> v)
{
    int n = v.size();
    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
          return false;
    }
    return true;
}

int main()
{
    vector<int> v = {1,2,3,4,5};
    // vector<int> v = {1,2,6,4,5};
    (isSorted(v)) ? cout<<"True" : cout<<"False";
     return 0;

}