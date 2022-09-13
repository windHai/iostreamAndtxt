#include<iostream>
int main()
{
    using namespace std;

    float price1 = 20.40;
    float price2 = 1.9+8.0/9.0;

    cout<<"Price1 = "<<price1<<"\n";
    cout<<"Price2 = "<<price2<<"\n";

    cout.precision(2);
    cout<<"Price1 = "<<price1<<"\n";  //只显示两位 包括小数点前
    cout<<"Price2 = "<<price2<<"\n";

    return 0;
}