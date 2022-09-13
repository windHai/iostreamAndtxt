#include<iostream>
int main()
{
    using namespace std;

    int temprature = 63;
    cout.setf(ios_base::showpoint);
    cout<<temprature<<"\n";

    cout<<std::hex;
    cout<<temprature<<"\n";
    cout.setf(ios_base::uppercase);
    cout.setf(ios::showbase);
    cout<<temprature<<"\n";

    cout<<"How" << true << "!oops -- how";
    cout.setf(ios_base::boolalpha);
    cout<<true<<endl;

    return 0;
}