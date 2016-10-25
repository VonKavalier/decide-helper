#include <iostream>
#include <cstring>
#include <cstdlib>
#include <unistd.h>
using namespace std;

int main(){

    srand (time(NULL));
    int choix;

    cout << "Between how many things your mind is ? : ";

    cin >> choix;

    cin.ignore();

    string chose;

    string choses[choix];

    for(int i=0; i<choix; i++){
        cout << "Enter the thing number " << i+1 << ": ";
        getline(cin, chose);
        choses[i]=chose;
    }
    cout << "Intense reflexion incoming...\n";

    sleep(3);

    cout << "Decision : " << choses[rand() % choix+1] << "\n";

    return 0;

}
