#include <iostream>
using namespace std;

class CompteBancaire {
  public:
    string email;
    string nomComplet;
    string telephone;
    string motDePasse;
    float solde;

    void deposer(float montant) {
      solde += montant;
    }

    void retirer(float montant) {
      if (montant > solde) {
        cout << "Solde insuffisant" << endl;
      } else {
        solde -= montant;
      }
    }
};

int main() {
  CompteBancaire compte;
  compte.email = "edu@uqa.ca";
  compte.nomComplet = "Eduardo Mendes";
  compte.telephone = "514-123-4567";
  compte.motDePasse = "123456";
  compte.solde = 100.0;

  compte.deposer(100.0);  
  compte.retirer(50.0);
}