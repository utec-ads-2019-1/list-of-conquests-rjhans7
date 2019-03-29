#include <iostream>
#include <string>
#include <map>
using namespace std;

class Conquest{
private:
    int nLines;
    map <string, int> listConquest;

public:

    Conquest(int line){ nLines = line;}

    void contador(){
        string name;
        cin >> name;
        cin.ignore(100, '\n');
        if (listConquest.find(name) != listConquest.end())
            listConquest [name] = listConquest[name] + 1;
        else
            listConquest[name] = 1;
    };
    void iterador(int n){
        while(n--) contador();
    }

    void mostrar(){
        for (auto conquest: listConquest)
            cout <<conquest.first << " " << conquest.second << endl;
    }
    void ejecutar (){
        iterador(nLines);
        mostrar();
    }
};
int main(int argc, char *argv[]) {
    int nLines; cin >> nLines;
    cin.ignore();
    Conquest Leporello (nLines);
    Leporello.ejecutar();
    return 0;
}