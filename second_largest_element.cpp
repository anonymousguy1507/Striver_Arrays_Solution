#include<bits/stdc++.h>
using namespace std;

int Largest(vector<int> v)
{
    int n = v.size();
    if(n<2)
     return -1;
    int lt = *max_element(v.begin(),v.end());
    int i=0;
    int ans = INT_MIN;
    // cout<<lt<<" ";
  for(int i=0;i<n;i++)
    {
      if(v[i]>ans and v[i]!=lt)
        ans = v[i];
    }

return ans;

}
int main()
{
    vector<int> v = {1,4,7,2,7,5};
    int ans = Largest(v);
    cout<<"Second Largest Element: "<<ans;
    return 0;
}