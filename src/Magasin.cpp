#include "Magasin.h"
#include <iostream>

    void Magasin::ajouterProduit(const Produit& produit){
        _products.push_back(produit);
    }

    void Magasin::ajouterClient(const Client& client){
        _clients.push_back(client);
    }

    void Magasin::ajouterCommande(const Order& order){
        _orders.push_back(order);
    }