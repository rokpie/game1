#include <iostream>
#include <cmath>

using namespace std;

struct data{
    int mt, mn, d;
};

string tostring (int n, int sk){
    int s = trunc(log10(n)) + 1; // n ilgis
    sk -= s; // kiek truksta 0
    string fina = "";
    for (int i = 0; i < sk; i++){
        fina += '0'; //stringas su nuliais
    }
    return (fina + to_string(n)); // return string su nuliais + skaicius
}

int main()
{
    cout << "Hello world!" << endl;
    data g[600];
    g[0].mn = 1;
    data p;
    p.mn = 01;
    p.d = 02;
    p.mt = 2021;
    cout << tostring(10, 500) << endl;
    return 0;
}
