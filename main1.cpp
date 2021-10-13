#include <iostream>

using namespace std;

///Turime draugu sarasa jonas gimes 2000 vasario 23 d. petras 1970 balandzio 1 kiek turime draugu; tarkim duoda data po saraso 2020 vasario 17 pirmadienis ir atsako sia savaite gime jonas

string isvestiVardai[100];
string vardai[100];
int metai[100];
int menesiai[100];
int dienos[100];
int a = 0;
int menesis[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool ArKeliamieji(int x){
    if ((x%4 == 0) && (x%100 > 0)){
        return true;
    }
    else if (x%400 == 0){
        return true;
    }
    else return false;
}

void Gimtadienis(){
    int datametai, datamenuo, datadiena;
    cout << "Iveskit pirmos savaites dienos metus: ";
    cin >> datametai;
    cout << "menesi: ";
    cin >> datamenuo;
    cout << "diena: ";
    cin >> datadiena; // 25
    if (!ArKeliamieji(datametai)){menesis[1] = 28;} /// taip
    if (datadiena <= menesis[datamenuo-1] - 7){ // 25<= 23
        for (int i = datadiena; i < datadiena+7; i++){
            for (int j = 0; j <100; j++){
                if ((menesiai[j] == datamenuo) && (dienos[j] == i)){
                    isvestiVardai[a] = vardai[j];
                    cout << "veikia iki cia"<< i << isvestiVardai[a];
                    a++;
                }

            }
        }
    }
    else if (datamenuo == 12){ // 6 žž 12
        int sk = menesis[11] - datadiena;
        for (int i = datadiena; i < menesis[datamenuo-1]; i++){
            cout << "bent jau tikrina" << i<< endl;
            for (int j = 0; j <100; j++){
                if ((menesiai[j] == datamenuo) && (dienos[j] == i)){
                    isvestiVardai[a] = vardai[j];
                    cout << "veikia iki cia"<< i << isvestiVardai[a];
                    a++;
                }

            }
        }
        for (int i = 0; i < datadiena+(7-sk); i++){
            cout << "bent jau tikrina" << i<< endl;
            for (int j = 1; j <100; j++){
                if ((menesiai[j] == 1) && (dienos[j] == i)){
                    isvestiVardai[a] = vardai[j];
                    cout << "veikia iki cia"<< i << isvestiVardai[a];
                    a++;
                }

            }
        }
    }
    else{
        int sk = 7-(menesis[datamenuo-1] - datadiena); // sk ž 7-(30-25)
        for (int i = datadiena; i < menesis[datamenuo-1]; i++){
            cout << "bent jau tikrina" << i<< endl;
            for (int j = 0; j <100; j++){
				cout << "bent jau tikrina" << i << " " << menesiai[j] << "žž" << datamenuo << "; " << dienos[j] << "žž"<< i << "; "<< vardai[j] <<endl;
                if ((menesiai[j] == datamenuo) && (dienos[j] == i)){
                    isvestiVardai[a] = vardai[j];
                    cout << "veikia iki cia"<< i << isvestiVardai[a];
                    a++;
                }

            }
        }
        for (int i = 0; i < sk; i++){
            for (int j = a; j <100; j++){
                if ((menesiai[j] == (datamenuo+1)) && (dienos[j] == i)){
                    isvestiVardai[a] = vardai[j];
                    cout << "veikia iki cia"<< i << isvestiVardai[a];
                    a++;
                }

            }
        }
    }
}

void iveskitZmogu(int i){
    string vardas;
    char ats;
    int datametai, datamenuo, datadiena;
    cout << "vardas: ";
    cin >> vardai[i];
    cout << "metai: ";
    cin >> metai[i];
    cout << "menesis(sk): ";
    cin >> menesiai[i];
    cout << "diena: ";
    cin >> dienos[i];
    cout << "Ar norite irasyt dar viena zmogu(t ar n): ";
    cin>> ats;
    if (ats == 't'){
        iveskitZmogu(i++);
    }
    else{
        Gimtadienis();
    }

}

int main()
{
    iveskitZmogu(0);

    if (isvestiVardai[0].length() == 0){cout << "Sia savaite gimtadienius svencia: "<< "niekas" << endl;}
    else {
        cout << "Sia savaite gimtadienius svencia: ";
        for (int i = 0; i <100; i++){
            if (isvestiVardai[i].length() == 0) break;
            cout << isvestiVardai[i] << ", ";
        }}
    return 0;
}
