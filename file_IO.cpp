#include <iostream>
#include <fstream>
using namespace std;
//easiest way
main()
{
    ofstream f ("test.txt");

    string str;
    while(getline(cin,str)){
        if(str=="0") break;
        f<<str<<"\n";
    }

    f.close();



    ifstream file ("test.txt");

    string s;
    while(getline(file,s))
        cout<<s<<endl;

    file.close();
}
