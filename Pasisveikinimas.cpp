#include <iostream>
#include <string>
using namespace std;

int main()
{

    string vardas;
    cout << "Iveskite varda: " << endl;
    cin >> vardas;
    string sveikinimas;
      sveikinimas = "Sveikas, " + vardas + "!";
    int eilIlgis = sveikinimas.length() + 4;
    string eil1, eil2, eil3, eil4, eil5;
//Pirma eilute
    for (int i = 0; i < eilIlgis; i++) {
        eil1 += "*";
    }
//Antra eilute
    eil2 += "*";
    for (int i = 0; i < eilIlgis-2; i++) {
        eil2 += " ";
    }
    eil2 += "*";
//Trecia eilute
    eil3 = "* " + sveikinimas + " *";

//Ketvirta eilute
    eil4 = eil2;
// Penkta eilute
    eil5 = eil1;

    cout << eil1 << endl << eil2 << endl << eil3 << endl << eil4 << endl << eil5;

    return 0;
}
