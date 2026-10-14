#include <iostream>
using namespace std;

int main(){
    int funkcija;
    int valiuta;
    int suma;

    const double GBP_Bendras   = 0.8729;
    const double GBP_Pirkti    = 0.8600;
    const double GBP_Parduoti  = 0.9220;
    const double USD_Bendras   = 1.1793;
    const double USD_Pirkti    = 1.1460;
    const double USD_Parduoti  = 1.2340;
    const double INR_Bendras   = 104.6918;
    const double INR_Pirkti    = 101.3862;
    const double INR_Parduoti  = 107.8546;
    const EUR_bendras = 1;

    cout << "Sveiki, pasirinkite funkcija irasydami jos numeri (1-4): \n";
    cout << "1. Valiutos palyginimas su EUR. \n";
    cout << "2. Valiutos pirkimas (EUR > Pasirinkta valiuta).\n";
    cout << "3. Valiutos pardavimas (Pasirinkta valiuta > EUR).\n";
    cout << "4. Iseiti.\n";
    cin >> funkcija;

        if (funkcija > 4){
        cout << "Neteisinga ivestis. Spauskite nuo 1 iki 4.";
            return 0;
        }
        if (funkcija < 1){
        cout << "Neteisinga ivestis. Spauskite nuo 1 iki 4.";
        }
        if (funkcija == 1){
            cout << "Pasirinkite valiuta, kuria norite palyginti su EUR (1-3).\n";
            cout << "1. GBP.\n";
            cout << "2. USD.\n";
            cout << "3. INR.\n";
            cin >> valiuta;
                if (valiuta == 1);
                    bool EUR_bendras > GBP_Bendras;
                    cout << ""

        return 0;
        }
        if (funkcija == 2){
        cout << "Pasirinkite valiuta, kuria norite pirkti (1-3).\n";
            cout << "1. GBP.\n";
            cout << "2. USD.\n";
            cout << "3. INR.\n";
            cin >> valiuta;
        return 0;
        }
        if (funkcija == 3){
        cout << "Pasirinkite valiuta, kuria norite parduoti (1-3).\n";
            cout << "1. GBP.\n";
            cout << "2. USD.\n";
            cout << "3. INR.\n";
            cin >> valiuta;
        return 0;
        }
        if (funkcija == 4){
        cout << "Geros dienos.\n";
            return 0;
        }
        return 0;
}

