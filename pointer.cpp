#include <iostream>

int main()
{
    using namespace std;
    int updates = 6;
    int *p_update;
    p_update=&updates;
    cout<<"Values:updates=" <<updates;
    cout<<",*p_updates="<<*p_update<<endl;

    cout<<"Address:&updates= "<<&updates;
    cout<<",p_updates= "<<p_update<<endl;

    *p_update=*p_update+1;
    cout<<"Now update = "<<updates<<endl;
    return 0;
}