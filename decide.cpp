#include <iostream>
#include <cstring>
#include <cstdlib>
#include <unistd.h>
using namespace std;

int main(){

    srand (time(NULL));
    int choix;

    cout << "Entre combien de choses hésites-tu ? : ";

    cin >> choix;

    cin.ignore();

    string chose;

    string choses[choix];

    for(int i=0; i<choix; i++){
        cout << "Rentre la chose " << i+1 << ": ";
        getline(cin, chose);
        choses[i]=chose;
    }
    cout << "Réflexion intense...\n";

    sleep(3);

    cout << "Décision : " << choses[rand() % choix+1] << "\n";

    return 0;

}
