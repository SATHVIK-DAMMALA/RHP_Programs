/*Program to use Bitwise Check for Alphabets and Numbers*/
#include <iostream>
using namespace std;
int main()
{
    string s;
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;
    cin >> s;
    for(char ch: s){
        if(ch >= 'a' && ch <='z')
            flag1 |= (1<<(ch-'a'));
        if(ch >= 'A' && ch <= 'Z')
            flag2 |= (1<<(ch-'A'));
        if(ch >= '0' && ch <='9')
            flag3 |= (1<<(ch-'0'));
    }
    cout << "Small Letters : ";
    cout << ((flag1==(1<<26)-1)?"Yes":"No");
    cout << endl;
    cout << "Captial Letters : ";
    cout << ((flag2 == (1<<26)-1)?"Yes":"No");
    cout << endl;
    cout << "Numbers : ";
    cout << ((flag3 == (1<<10)-1)?"Yes":"No");
}
