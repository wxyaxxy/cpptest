#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    int n_int =INT_MAX;
    short n_short = SHRT_MAX;
    long n_long  = LONG_MAX;

    cout<<sizeof(int)<<" "<<n_int<<endl;
    cout<<sizeof(short)<<" "<<n_short<<endl;
    cout<<sizeof(long)<<" "<<n_long<<endl;
    
    return 0;
}