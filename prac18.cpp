#include <iostream>
#include <string>
using namespace std;
class Binary
{
    string s;

public:
    void read();
    void chk_bin();
    void ones_compliment();
    void display();
};

void Binary ::read(void)
{

    cout << "Enter a binary number " << endl;
    cin >> s;
}

void Binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "INCORRECT BINARY FORMAT" << endl;
            exit(0);
        }
        
    }
}
void Binary ::ones_compliment(void)
{
    // chk_bin();
    cout<<" /n YOUR BINARY NO. AFTER COMPLIMENT  "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else
            {
                s.at(i) = '0';
            }
        }
    }
}
void Binary ::display()
{
    cout<<"DISPLAYING YOUR BINARY NO."<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    Binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}