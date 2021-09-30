#include <iostream>

using namespace std;

int main()
{
    int i;

    string str = "bookkeeper";
    for (i = 0; i < str.length() - 1; i++)
    {

        if (str[i] == str[i + 1])
        {
            cout << str[i] << " has adjacent appearance\n";
        }
    }

    return 0;
}