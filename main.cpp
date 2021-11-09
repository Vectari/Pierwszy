#include <iostream>

using namespace std;

int uczniowie, cukierki, x, y;

int main()
{
    cout << "Ilu uczniow jest w Twojej klasie?" << endl;
    cin >> uczniowie;

    cout << "Ile cukierkow kupila mama?" << endl;
    cin >> cukierki;

    x = cukierki/(uczniowie-1);

    cout << "Cukierkow dla kazdego ucznia:" << x;

    y = cukierki-x*(uczniowie-1);
    cout << endl <<endl << "Dla Jasia na wieczor zostalo cukierkow:" << y <<endl;

    return 0;
}
