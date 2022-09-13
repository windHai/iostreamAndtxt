#include<iostream>
#include<iomanip>
#include<cmath>

int main()
{
    using namespace std;

    cout << fixed << right;  //使用定点计数法 并且右对齐

    cout<<setw(6)<<"N"<<setw(14)<<"square root"
    <<setw(15)<<"fourth root \n";

    double root;

    for(int n = 10;n<=100;n++)
    {
        //setfill 设置的是填充的   setw设置的是字段的宽度   setprecision 设置的是小数点后位数(精度)
        root = sqrt(n);
        cout<<setw(6)<<setfill('.')<< n <<setfill(' ')<<
        setw(12)<<setprecision(3)<<root<<
        setw(15)<<setprecision(4)<<sqrt(root)<<"\n";
    }
    

    return 0;
}