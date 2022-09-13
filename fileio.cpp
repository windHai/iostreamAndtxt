#include<iostream>
#include<fstream>
#include<string>

int main()
{
    using namespace std;

    string filename;
    cout<<"Enter name for new file:";
    cin>>filename;

   ofstream os;
   os.open(filename.c_str());  //将字符转化为c风格字符串
   os<<"For your eyes only!\n";
   cout<<"Enter your secret number: ";
   double s;
   cin>>s;
   os<<"You secret number is "<<s<<"\n";
   os.close();

   ifstream is;
   is.open(filename.c_str());  //打开输出
   cout<<"Here are the contents os "<<filename<<"\n";
   char ch;
   while (is.get(ch))
     cout<<ch;
   cout<<"Done!\n";
   is.close();





    return 0;
}