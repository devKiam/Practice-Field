#include <iostream>
using namespace std;

class test{
    int a,b;
public:
    test(int x, int y) { a=x; b=y;}
    test() { }
    test operator + (test ob){
        test temp;
        temp.a = a + ob.a;
        temp.b = b + ob.b;
        return temp;
    }
    test operator - (test ob){
        test temp;
        temp.a = a - ob.a;
        temp.b = b - ob.b;
        return temp;
    }
    test operator * (test ob){
        test temp;
        temp.a = a * ob.a;
        temp.b = b * ob.b;
        return temp;
    }
    friend test operator * (int i, test ob);
    test operator ++ (int waste)
    {
        a++;
        b++;
        return *this;
    }
    bool operator == (test ob)
    {
        return a == ob.a && b == ob.b;
    }
    test operator - ()
    {
        a = -a;
        b = -b;
        return *this;
    }
    void get() { cout<<a<<" "<<b<<endl; }
};

test operator * (int i, test ob)
{
    test temp;
    temp.a = i * ob.a;
    temp.b = i * ob.b;
    return temp;
}

main()
{
    test t1(2,3), t2(3,4), tadd, tsubs, tmult, t2a, t3;

    tadd = t1 + t2;
    tadd.get();

    tsubs = t2 - t1;
    tsubs.get();

    tmult = t1 * t2;
    tmult.get();

    t2a = 2 * t1;
    t2a.get();

    t1++;
    t1.get();

    (t1==t2) ? cout<<"equal"<<endl : cout<<"not equal"<<endl;

    t3 = -t1;
    t3.get();
}
