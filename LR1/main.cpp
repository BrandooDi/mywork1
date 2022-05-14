#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double x, y, z, S;

    cout << "¬ведите x,y,z\n";
    cin >> x >> y >> z;

    if (x + y > z)
    {
        cout << "s= x+y+z\n";
    }
    else {
        if (x + y <=z)
            cout << "s= x+y-z.";
    }
    return 0;
}
