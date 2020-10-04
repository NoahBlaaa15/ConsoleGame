#include <iostream>
#include <ctime>

using namespace std;

typedef struct pc{
    string name;
    int hardware;
    int software;
    int aussehen;
    };

pc pc1 = {"PC", 1, 1, 1, };

string inputString;

int pcbuilder(){
    cout << "Wilkommen bei PC-Builder!" << endl << "In diesem Spiel musst du versuchen deinen Computer auf das maximale Level zu bringen" << endl << "Benutze fuer alle Befehle 'help'" << endl;
    while(true){
        cin >> inputString;
        //TODO: Convert if to switch-statement
            if(inputString == "help") {
                cout << "list: Zeigt dir deine aktuellen Stats an\nupgrade: Verbessert deinen Hardware\ndownload: Verbessert deine Software\nbuild: Verschoenert deinen PC\nclose: Verlaesst das Spiel" << endl;
            }else if(inputString == "list") {
                cout << pc1.name << ":" << endl << " Hardware:" << pc1.hardware << endl << " Software:" << pc1.software << endl << " Aussehen:" << pc1.aussehen << endl << " Level:" << pc1.hardware * pc1.software * pc1.aussehen << endl << "  Boost deinen PC zum MAXIMUM :)" << endl;
            }else if(inputString == "upgrade") {
                pc1.hardware += 1;
                cout << "Dein PC wurde geupgraded!" << endl;
            }else if(inputString == "download"){
                pc1.software += 1;
                cout << "Dein PC wurde geboostet!" << endl;
            }else if(inputString == "build") {
                pc1.aussehen += 1;
                cout << "Dein PC wurde verschoenert!" << endl;
            }else if(inputString == "close") {
                cout << "Bye Bye :)";
                return 0;
        }
    }
}

int main() {

        cout << "Console Games C++ - Waehle ein spiel: pcbuilder"
        cin >> inputString;
        switch (inputString) {
          case "pcbuilder":
            pcbuilder();
            break;
        }

        system("pause");
        return 0;
}
