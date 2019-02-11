#include <iostream>
#include <string>


using namespace std;

int main()
{
    cout << "Iveskit savo varda" << endl;
        string vardas;
            cin >> vardas;

    string sveikinimas;

        if (vardas.back() == 's') {
    sveikinimas = "Sveikas, " + vardas + "!";
  } else {
    sveikinimas = "Sveika, " + vardas + "!";
  }

        int starpai = 1;
            cout << "Iveskite tarpus nuo 1 iki 10" << endl;
                cin >> starpai;

    const int eilutes = starpai * 2 + 3;
    string::size_type stulpeliai = sveikinimas.size() + starpai * 2 + 2;
    cout << endl;

    for (int a =0; a!=eilutes; ++a)
    {
        string::size_type b = 0;
        while (b != stulpeliai)
            //sveikinimo laikas
        {
            if (a == starpai + 1 && b == starpai + 1) {
        cout << sveikinimas;
        b += sveikinimas.size();
        }
        else {
            if (a==0||a==eilutes -1||b==0||b==stulpeliai-1)
                cout << "*";
                else
                    cout << " ";
                ++b;
            }
        }
        cout << endl;
    }

    return 0;
}
