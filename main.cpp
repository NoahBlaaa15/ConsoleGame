#include <iostream>
#include <ctime>

using namespace std;

typedef struct pc{
    string name;
    int hardware;
    int software;
    int aussehen;
    };

pc f1 = {"PC", 1, 1, 1, };

string a;

int game(){
    cout << "Dein Spiel hat begonnen, benutze fuer alle Befehle 'help'" << endl;
    while(true){
        cin >> a;
            if(a == "help") {
                cout << "list: Zeigt dir deine aktuellen Stats an\nupgrade: Verbessert deinen Hardware\ndownload: Verbessert deine Software\nbuild: Verschoenert deinen PC\nclose: Verlaesst das Spiel" << endl;
            }else if(a == "list") {
                cout << f1.name << ":" << endl << " Hardware:" << f1.hardware << endl << " Software:" << f1.software << endl << " Aussehen:" << f1.aussehen << endl << " Level:" << f1.hardware * f1.software * f1.aussehen << endl << "  Boost deinen PC zum MAXIMUM :)" << endl;
            }else if(a == "upgrade") {
                f1.hardware += 1;
                cout << "Dein PC wurde geupgraded!" << endl;
            }else if(a == "download"){
                f1.software += 1;
                cout << "Dein PC wurde geboostet!" << endl;
            }else if(a == "build") {
                f1.aussehen += 1;
                cout << "Dein PC wurde verschoenert!" << endl;
            }else if(a == "close") {
                cout << "Bye Bye :)";
                return 0;
        }
    }
}

int main() {

        cout << "Wilkommen beim PC-Builder!" << endl << "In diesem Spiel musst du versuchen deinen Computer auf das maximale Level zu bringen" << endl << "Bist du bereit?" << endl;
        cin >> a;
        game();
        system("pause");
        return 0;
}
