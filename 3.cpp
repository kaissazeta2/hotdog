

#include <iostream>
using namespace std;
int age(int a) {
    if (a < 12) { return 5; }
    else if (a >= 12 && a<=60) { return 10; }
    else { return 7; }
}
double time(double b, int c) {
    if (b <= 12) { return c*0.8;}
    else { return c; }
}
int main()
{
    int k;
    double l;
    cin >> k >> l;
    cout << time(l, age(k));
    
}

