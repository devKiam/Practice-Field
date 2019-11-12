#include <iostream>
using namespace std;

template <class type1>
class Test
{
    type1 a;
public:
    Test (type1 x) { a=x;}
    double sq(type1 z) { return a+z;}

};

main()
{
    Test<double> ob1(12);
    Test<double> ob2(12.5);

    cout<<ob1.sq(5.5)<<endl;
    cout<<ob2.sq(10)<<endl;
}
