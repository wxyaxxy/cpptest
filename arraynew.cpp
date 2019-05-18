#include <iostream>
void fun(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    using namespace std;

    int a = 10;
    int b = 20;
    cout << a << b << endl;
    fun(a, b);
    cout << a << b << endl;

    // double *p3 = new double[3];
    // p3[0]=0.2;
    // p3[1]=0.5;
    // p3[2]=0.8;

    // cout<<"p3[1] is "<<p3[1]<<".\n";
    // // double *ptr=(double *)&p3+1;
    // cout<<"Now p3[0] is "<<p3[0]<<" and ";
    // cout<<"p3[1] is "<<p3[1]<<".\n";
    // p3=p3-1;
    // cout<<*(ptr-1);
    // delete[] p3;
    return 0;
}