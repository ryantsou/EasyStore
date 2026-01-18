#ifndef MAGASIN_HPP
#define MAGASIN_HPP

#include <string>
#include <vector>
#include "Product.h"
#include "Client.h"
#include "Order.h"

class Magasin {
    public:
        Magasin();
        //ajouter un produit au panier d'achat d'un client
        void ajouterProduitAuPanierClient(const std::string& idClient, const Product& product);
        
        void ajouterClients (const Client& client);
        void ajouterOrder (const Order& order);

        //afficher tous les produits
        std::vector<Product> tousLesProduits() const;

        //afficher un produit par nom
        std::vector<Product> ProductparNom(std::string& nomProduct) const;

       //mettre à jour la quantité d'un produit sélectionné par son nom
        void mettreAJourQuantiteProduit(const std::string& nomProduct, int nouvelleQuantite);
        
        //afficher tous les clients
        std::vector<Client> tousLesClients() const;

        //affichier client par id
        std::vector<Client> ClientparId(const std::string& idClient) const;

        //supprimer un produit au panier d'achat d'un client.
        void supprimerProduitDuPanierClient(const std::string& idClient, const std::string& nomProduct);

        //valider une commande
        void validerCommande(const std::string& idClient);

        //mettre à jour le statut de livraison d'une commande
        void mettreAJourStatutLivraison(const std::string& order_id, bool estlivre);

        //historique des commandes d'un client
        std::vector<Order> historiqueCommandesClient(const std::string& idClient) const;
    private:
        std::vector<Product> _products;
        std::vector<Client> _clients;
        std::vector<Order> _orders;
};

#endif