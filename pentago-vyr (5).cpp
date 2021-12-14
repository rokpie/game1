#include <iostream>
#include <fstream>

using namespace std;

int kvadratas[6][6] = {0};
int kopija [6][6] = {0};

bool tikrinti(){
    for (int x = 0; x < 6; x++){


        if ((kopija[x][2] == kopija[x][1]) && (kopija[x][1] == kopija[x][0]) &&(kopija[x][2] == kopija[x][3]) &&(kopija[x][2] == kopija[x][4]) && (kopija[x][2]!=0)) return true;
        if ((kopija[x][2] == kopija[x][1]) && (kopija[x][1] == kopija[x][5]) &&(kopija[x][2] == kopija[x][3]) &&(kopija[x][2] == kopija[x][4]) && (kopija[x][2]!=0)) return true;

    }return false;
}

void sulygint(){
    for(int x = 0; x < 6; x++){
        for(int y = 0; y < 6; y++){
            kopija[x][y] = kvadratas[x][y];
        }
    }
}

bool pasukti90(int x, int y){
    kopija[0+x][2+y] = kvadratas[0+x][0+y];
    kopija[0+x][1+y] = kvadratas[1+x][0+y];
    kopija[0+x][0+y] = kvadratas[2+x][0+y];
    kopija[1+x][2+y] = kvadratas[0+x][1+y];
    kopija[1+x][1+y] = kvadratas[1+x][1+y];
    kopija[1+x][0+y] = kvadratas[2+x][1+y];
    kopija[2+x][2+y] = kvadratas[0+x][2+y];
    kopija[2+x][1+y] = kvadratas[1+x][2+y];
    kopija[2+x][0+y] = kvadratas[2+x][2+y];
    if (tikrinti()){
        return true;
    }
    sulygint();
    return false;
}

bool pasukti270(int x, int y){
    kopija[2+x][0+y] = kvadratas[0+x][0+y];
    kopija[2+x][1+y] = kvadratas[1+x][0+y];
    kopija[2+x][2+y] = kvadratas[2+x][0+y];
    kopija[1+x][0+y] = kvadratas[0+x][1+y];
    kopija[1+x][1+y] = kvadratas[1+x][1+y];
    kopija[1+x][2+y] = kvadratas[2+x][1+y];
    kopija[0+x][0+y] = kvadratas[0+x][2+y];
    kopija[0+x][1+y] = kvadratas[1+x][2+y];
    kopija[0+x][2+y] = kvadratas[2+x][2+y];
    if (tikrinti()){
        return true;
    }
    sulygint();
    return false;
}

int main()
{
    for (int i = 0; i <6; i++){
        for (int j = 0; j<6; j++){
            cin >> kvadratas[j][i];
        }
    }

    bool arlaimi = false;
    for (int n = 1; n < 5;n++){
        if (n == 1){
        int x = 0;
        int y = 0;
        if (pasukti90(x, y)){
            cout <<"LAIMI"<< endl<< n << " 90";
            arlaimi = true;
            break;
        }
        if (pasukti270(x, y)){
            cout <<"LAIMI"<< endl<< n << " 270";
            arlaimi = true;
            break;
        }
    }
    else if (n == 2){
        int x = 3;
        int y = 0;
        if (pasukti90(x, y)){
            cout <<"LAIMI"<< endl<< n << " 90";
            arlaimi = true;
            break;
        }
        if (pasukti270(x, y)){
            cout <<"LAIMI"<< endl<< n << " 270";
            arlaimi = true;
            break;
        }
    }
    else if (n == 3){
        int x = 0;
        int y = 3;
        if (pasukti90(x, y)){
            cout <<"LAIMI"<< endl<< n << " 90";
            arlaimi = true;
            break;
        }
        if (pasukti270(x, y)){
            cout <<"LAIMI"<< endl<< n << " 270";
            arlaimi = true;
            break;
        }
    }
    else if (n == 4){
        int x = 3;
        int y = 3;
        if (pasukti90(x, y)){
            cout <<"LAIMI"<< endl<< n << " 90";
            arlaimi = true;
            break;
        }
        if (pasukti270(x, y)){
            cout <<"LAIMI"<< endl<< n << " 270";
            arlaimi = true;
            break;
        }
    }
    }
    if(arlaimi == false){
        cout <<"NELAIMI";
    }

    return 0;
}


