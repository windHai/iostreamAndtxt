#include<iostream>

int main()
{
    using namespace std;

    cout<<"Enter numbers: ";
    int sum = 0;
    int input;
    while(cin>>input)
    {
        sum+=input;
        cout<<input<<"  ";
    }
    cout<<"value "<<input;
    cout<<"\n sum = "<<sum<<endl;


    return 0;
}