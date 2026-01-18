#ifndef CLIENT_HPP
#define CLIENT_HPP
#include "Product.h"
#include <string>
#include <vector>

class Client {
    public:
        //Client ()= default;
        Client (const std::string& id, std::string& prenom, const std::string& nom, const std::vector<Product>& panier_achat);
        const std::string& id() const;
        const std::string& prenom() const;
        const std::string& nom() const;
        void set_id(const std::string& id);
        void set_prenom(const std::string& prenom);
        void set_nom(const std::string& nom);

        const std::vector<Product> &panier_achat() const;

        //ajout produit dans panier d'achat
        void ajouterProduit(const Product& product);
        //vider panier d'achat
        void viderPanier();
        //modifier produit dans panier d'achat
        void modifierProduit(const std::string& nomProduct, int nouvelleQuantite);
        //supprimer produit du panier d'achat
        void supprimerProduit(const std::string& nomProduct);

        void print() const;


    private:
        std::string _ids;
        std::string _prenoms;
        std::string _noms;
        std::vector<Product> _panier_achat;
};

#endif
