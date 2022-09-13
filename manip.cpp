#include<iostream>
using namespace std;

void Show(int & n)
{
    cout<<"n \t n \n";
    cout<<n<<"\t"<<n*n<<endl;

    cout<<hex<<n<<"\t"<<n*n<<endl;

    cout<<oct<<n<<"\t"<<n*n<<endl;

    cout<<dec<<n<<"\n"<<n*n<<endl;
}

int main()
{
    int i;
    cin>>i;

    Show(i);

    return 0;
}