
#include <iostream>
using namespace std;

bool isPrime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) { return 0; }
    }
    return a!=1;
}
void razlozhenie(int z) {
    if (z == 1) { cout << 1; }
    else {
        for (int w = 2; w <= z; w++) {
        while (z % w == 0) {
            z /= w;
            cout << w << endl;
            }
        }
    }
}
int nod(int a, int b, int c=1) {
    for (int w = 2; w <= b; w++) {
        while (a % w == 0 && b%w==0) {
            a /= w;
            b /= w;
            c *= w;
        }
    }
    return c;
}
int main()
{
    int x,y;
    cin >> x>>y;
    if (x <= y) {
        y = x - y;
        x = x - y;
        y = y + x;
    }
    cout << nod(x, y) << endl << x * y / (nod(x, y));
    
    

}


