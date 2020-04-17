#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct uczen
{
    string klasa;
    int klas;
    int numer;
};

class szkola
{
        vector <struct klasy> spis;

        public:
        
		void wprowadz();
        void wypisz();
        void zapiszDoPliku(const char *);
};

void szkola::wprowadz()
{
        int iloscKlas;
        struct klasa wprowadzany;
        cout <<"Iloœæ klas:";
        cin  >> iloscKlas;
        for (int i=0; i<iloscKlas; i++)
        {
            cout << "Nazwa klasy: ";
            cin >> wprowadzany.klas;
            spis.push_back(wprowadzany); 
        }
}
void uczen::wypisz()
{
        for (vector<struct klas>::iterator it = spis.begin(); it != spis.end(); ++it)
        {
            cout << it->klasa << " ";
            cout << it->klasa << " ";
            cout << it->klasa << "\n";
        }
}

void szkola::zapiszDoPliku(const char *nazwa)
{
        ofstream plik1;
        plik.open(plik1);
        	for (vector<struct klasy>::iterator it = spis.begin(); it != spis.end(); ++it)
        	{
                plik << it->klasa << " ";
                plik << it->klasa << " ";
                plik << it->klasa << "\n";
        	}
        plik.close();
}

int main(int argc, char** argv) 
{
        szkola szkola;
        szkola.wprowadz();
        szkola.wypisz();
        szkola.zapiszDoPliku("plik2.txt");
        return 0;
}	
