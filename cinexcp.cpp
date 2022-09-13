#include<iostream>
#include<exception>

int main()
{
    using namespace std;

    cin.exceptions(ios_base::failbit);
    cout<<"Enter numbers: ";
    int sum =0;
    int input;
    try
    {
        while(cin>>input)
        {
            sum+=input;
        }
    }
    catch(ios_base::failure &bf)
    {
        std::cerr << bf.what() << '\n';
        cout<<"O! the horror\n";
    }
    cout<<"value:"<<input<<"\n";
    cout<<"sum = "<<sum;

    return 0;
}