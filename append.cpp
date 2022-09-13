#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>

const char* file = "guests.txt";

int main()
{
    using namespace std;

    ifstream is;
    is.open(file);
    char ch;
    if (is.is_open())
    {
        cout << "Here are the current contents of the " << file << " file\n";
        while (is.get(ch))  //这是是读取文件  要用定义的 is
        {
            cout << ch;
        }
        is.close();
    }
    cout << endl;
    ofstream os;
    os.open(file, ios_base::out | ios::app);
    if (!os.is_open())
    {
        cerr << "Can't open " << file << " file for output.\n";
        exit(EXIT_FAILURE);
    }

    cout << "Enter guest names (enter a blank line to quit):\n";
    string names;
    while (getline(cin, names) && names.size() > 0)
    {
        os << names << "\n";
    }
    os.close();

    is.clear();
    is.open(file);
    if (is.is_open())
    {
        cout << "Here are the current contents of the " << file << " file\n";
        while (is.get(ch))
        {
            cout << ch;
        }
        is.close();
    }
    cout << "Done!\n";

    return 0;
}