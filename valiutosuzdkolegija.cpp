#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int funkcija;
    int valiuta;
    double kiekis;

    const double GBP_Bendras   = 0.8729;
    const double GBP_Pirkti    = 0.8600;
    const double GBP_Parduoti  = 0.9220;
    const double USD_Bendras   = 1.1793;
    const double USD_Pirkti    = 1.1460;
    const double USD_Parduoti  = 1.2340;
    const double INR_Bendras   = 104.6918;
    const double INR_Pirkti    = 101.3862;
    const double INR_Parduoti  = 107.8546;

    cout << fixed << setprecision(2);

    cout << "Sveiki, pasirinkite funkcija irasydami jos numeri (1-4): \n";
    cout << "1. Valiutos palyginimas su EUR. \n";
    cout << "2. Valiutos pirkimas (EUR > Pasirinkta valiuta).\n";
    cout << "3. Valiutos pardavimas (Pasirinkta valiuta > EUR).\n";
    cout << "4. Iseiti.\n";
    cin >> funkcija;

        if (funkcija > 4){
        cout << "Neteisinga ivestis. Spauskite nuo 1 iki 4.";
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
            if (valiuta < 1 || valiuta > 3) {
                cout << "Pasirink valiuta ivesdamas nuo 1 iki 3";
            }
            if (valiuta == 1) {
                cout << "1 EUR = " << GBP_Bendras << " GBP\n";
                cout << "1 GBP = " << 1/GBP_Bendras << " EUR\n";
            }
            if (valiuta == 2) {
                cout << "1 EUR = " <<USD_Bendras << " USD\n";
                cout << "1 USD = " <<1/USD_Bendras<< " EUR\n";
            }
            if (valiuta == 3) {
                cout << "1 EUR = " << INR_Bendras << " INR\n";
                cout << "1 INR = " << 1/INR_Bendras << " EUR\n";
            }

        }
        if (funkcija == 2){
        cout << "Pasirinkite valiuta, kuria norite pirkti (1-3).\n";
            cout << "1. GBP.\n";
            cout << "2. USD.\n";
            cout << "3. INR.\n";
            cin >> valiuta;
            if (valiuta < 1 || valiuta > 3) {
                cout << "Pasirink valiuta ivesdamas nuo 1 iki 3";
                return 0;
            }
            cout << "Uz kiek euru norite pirkti?\n";
            cin >> kiekis;
            if (kiekis <= 0) {
                cout << "Iveskite euru kieki didesni negu 0.\n";
                return 0;
            }
            if (valiuta == 1) {
            cout << "Uz " << kiekis << " EUR, galite nusipirkti " << kiekis*GBP_Pirkti << " GBP\n";
            }
            if (valiuta == 2) {
            cout << "Uz " << kiekis << " EUR, galite nusipirkti " << kiekis*USD_Pirkti << " USD\n";
            }
            if (valiuta == 3) {
            cout << "Uz " << kiekis << " EUR, galite nusipirkti " << kiekis*INR_Pirkti << " INR\n";
            }
        }

        if (funkcija == 3){
            cout << "Pasirinkite valiuta, kuria norite parduoti (1-3).\n";
            cout << "1. GBP.\n";
            cout << "2. USD.\n";
            cout << "3. INR.\n";
            cin >> valiuta;
            if (valiuta < 1 || valiuta > 3) {
                cout << "Pasirink valiuta ivesdamas nuo 1 iki 3";
                return 0;
            }
            cout << "Kiek valiutos norite parduoti?\n";
            cin >> kiekis;
            if (kiekis <= 0) {
                cout << "Ivesk skaiciu didesni uz 0\n";
                return 0;
            }
            if (valiuta == 1) {
                cout << "Uz " << kiekis << " GBP galite gauti " << kiekis/GBP_Parduoti << " EUR";
            }
            if (valiuta == 2) {
                cout << "Uz " << kiekis << " USD galite gauti " << kiekis/USD_Parduoti << " EUR";
            }
            if (valiuta == 3) {
                cout << "Uz " << kiekis << " INR galite gauti " << kiekis/INR_Parduoti << " EUR";
            }
        }

        if (funkcija == 4){
        cout << "Geros dienos.\n";
        }
        return 0;
}
