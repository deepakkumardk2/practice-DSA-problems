#include <iostream>
using namespace std;
int main()
{
    system("cls");
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i<=5-j+1; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}