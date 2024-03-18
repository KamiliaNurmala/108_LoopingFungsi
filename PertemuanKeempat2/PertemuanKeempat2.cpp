#include <iostream>
using namespace std;

int main()
{
    int x;
    srand(time(0));

    x = rand() % 10;

    cout << "Nilai X awal = " << x << endl;
    
    while (x > 4) {
        cout << "Perulangan Dengan While" << endl;
        x = rand() % 10;
    }

    cout << "Nilai X akhir = " << x << endl;
}
