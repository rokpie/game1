#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin ("info.txt");

    int n, v, t, k, m;
    fin >> n >> m;
    int kur[n] = {0};
    int uz[2] = {10000,0};
    int laisve[n] = {0};
    for (int i = 0; i <n;i++){
        fin >> t >> v; // gavimo laikas, verte
        for(int j = 0; j < n; j++ ){
            fin >> k; // kurejriu laikas
            cout  << laisve[j]<< " "<< t << " " << k <<" "<< uz[0] << " " << j<< endl;
            if (laisve[j] < t){ // ar laisvas
                if (k < uz[0]){ // laikas < praeita maziausia laika
                    uz[0] = k;  // naujas maziausias laikas
                    uz[1] = j;  // kuris kurjeris
                }
            }
            cout << uz[1] << endl;
        }
        if (uz[0] != 10000){
            laisve[uz[1]] += uz[0];
            kur[uz[1]] += v;
            uz[0] = 10000;
            uz[1] = 0;
        }
    }
    for (int i = 0; i <n;i++){
            cout << kur[i]<< " ";
    }
    return 0;
}
