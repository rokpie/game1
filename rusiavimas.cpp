#include <iostream>

using namespace std;

void masyvo_surusiavimas(int mas[], int dydis){
    cout << dydis << endl;
    for (int k = 0; k <dydis; k++){
    int mazpoz = k;
    for(int i = k+1; i<dydis; i++){
        if(mas[mazpoz] >mas[i]){
            mazpoz = i;
        }
    }
    swap(mas[k], mas[mazpoz]);
    }
}

void massur(int mas[], int dydis){
    for(int k = 0; k<dydis; k++){
        for(int i = 0; i<dydis-1; i++){
             if mas[i]> mas[i+1]{
                swap (mas[i], mas[i+1]);
             }
        }
    }
}

void ms(int mas[], int dydis){
    for(int i = 0; i< dydis-1; i++){
        if(i>=0 && mas[i] > mas[i+1]){
            swap(mas[i], mas[i+2]);
            i=i-1;
        }
    }
}

void taip(int mas[], int dydis){
    sort(mas, mas+dydis)
}

int main(){
    int ugis[4] = {150, 120, 200, 175};

    int dydis = sizeof(ugis)/ sizeof(ugis[0]);
    masyvo_surusiavimas(ugis, dydis);
    for(int i = 0; i < dydis; i++){
        cout << ugis[i] << endl;
    }
    return 0;
}

