#include <iostream>
using namespace std;

class Voiture {
public:
    Voiture();

    // Augmente la vitesse et consomme de l'essence
    void accelerer();

    // Diminue la vitesse sans consommer d'essence
    void freiner();

    // Affiche l'état actuel de la voiture
    void afficherEtat() const;

private:
    int vitesse;
    int essence;
};

Voiture::Voiture() {
    vitesse = 0;
    essence = 100;
}

void Voiture::accelerer() {
    if(essence > 0) {
        vitesse += 10;
        essence -= 5;
    } else {
        cout << "Pas assez d'essence pour accélérer!" << endl;
    }
}

void Voiture::freiner() {
    if(vitesse > 0) {
        vitesse -= 10;
    } else {
        cout << "La voiture est déjà à l'arrêt!" << endl;
    }
}

void Voiture::afficherEtat() const {
    cout << "Vitesse: " << vitesse << " km/h" << endl;
    cout << "Essence: " << essence << "%" << endl;
}

int main() {
    Voiture maVoiture;
    
    maVoiture.afficherEtat();

    maVoiture.accelerer();
    maVoiture.afficherEtat();
    
    maVoiture.freiner();
    maVoiture.afficherEtat();
    
    return 0;
}