#include <iostream>
using namespace std;

int main(){
    int pasirinkimas;

    cout << "Sveiki, pasirinkite funkcija irasydami jos numeri (1-4): \n";
    cout << "1. Valiutos palyginimas su EUR. \n";
    cout << "2. Valiutos pirkimas (EUR > Pasirinkta valiuta).\n";
    cout << "3. Valiutos pardavimas (Pasirinkta valiuta > EUR).\n";
    cout << "4. Iseiti.";
    cin >> pasirinkimas;
        if (pasirinkimas = 4){
        cout << "Geros dienos.";
            return 0;
        }
        if (pasirinkimas > 4){
        cout << "Neteisinga ivestis. Spauskite nuo 1 iki 4."
            return 0;
        }
        if (pasirinkimas < 1){
        cout << "Neteisinga ivestis. Spauskite nuo 1 iki 4."
        }
        if (pasirinkimas = 1){
        cout << "sucess!";
        return 0;
        }
}









    return 0;

}
