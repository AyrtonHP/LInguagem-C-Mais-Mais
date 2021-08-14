#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    cout << "Ola Mundo" << endl;

    int n1 = 0;

    // system("pause");
    

    cout << "digite um número: ";

    cin >> n1;


    cout <<"o número digitado foi " << n1 << "!";

    return 0;
}
