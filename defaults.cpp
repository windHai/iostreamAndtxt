#include<iostream>

int main()
{
    using namespace std;

    cout<<"1,2,3,4,5,6,7,8,9,10\n";
    char ch = 'k';
    int t = 273;
    cout<<ch<<":\n";
    cout<<t<<":\n";
    cout<<-t<<":\n";

    double f1 = 1.200;
    cout<<f1 <<":\n";
    cout<<(f1 + 1.0/9.0) <<":\n";

    double f2 = 1.67E2;
    cout<<f2<<":\n";
    f2 += 1.0/9.0;
    cout<<f2<<":\n";
    cout<<(f2 * 1.04e4)<<":\n";

    double f3 = 2.3E-4;
    cout<<f3<<":\n";
    cout<<f3/10<<":\n";

}