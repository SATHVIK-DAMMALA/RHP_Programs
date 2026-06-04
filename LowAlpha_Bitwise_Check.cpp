/*Program to use Bitwise Check for Lowercase Alphabets*/
#include <iostream>
using namespace std;
int main()
{
    string s;
    int flag = 0;
    cin >> s;
    for(char ch: s){
        if(ch >= 'a' && ch <='z')
            flag |= (1<<(ch-'a'));
    }
    cout << "Small Letters : ";
    cout << ((flag==(1<<26)-1)?"Yes":"No");
}
