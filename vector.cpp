#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

main()
{
  vector<int> a;
  int i,z;

  for(i=0; i<5; i++){
    cout<<"Enter value no. "<< i <<endl;
    cin >> z;
    a.push_back(z);
  }
  for(i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
  }
}
