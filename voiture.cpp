#include <iostream>
using namespace std;

class Voiture {
public:
    int vitesse;
    int essence;
    
    // Augmente la vitesse et consomme de l'essence
    void accelerer() {
        if(essence > 0) {
            vitesse += 10;
            essence -= 5;
        } else {
            cout << "Pas assez d'essence pour accélérer!" << endl;
        }
    }

    // Diminue la vitesse sans consommer d'essence
    void freiner() {
        if(vitesse > 0) {
            vitesse -= 10;
        } else {
            cout << "La voiture est déjà à l'arrêt!" << endl;
        }
    }

    // Affiche l'état actuel de la voiture
    void afficherEtat() const {
        cout << "Vitesse: " << vitesse << " km/h" << endl;
        cout << "Essence: " << essence << "%" << endl;
    }
};

int main() {
    Voiture maVoiture;
    maVoiture.vitesse = 0;
    maVoiture.essence = 100;

    maVoiture.afficherEtat();
    
    maVoiture.accelerer();
    maVoiture.afficherEtat();
    
    maVoiture.freiner();
    maVoiture.afficherEtat();
    
    return 0;
}