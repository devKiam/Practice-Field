#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

main()
{
    vector<int> v;

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int z;
        cin>>z;
        v.push_back(z);
    }

    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
