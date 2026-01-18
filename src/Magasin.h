#ifndef MAGASIN_HPP
#define MAGASIN_HPP

#include "Client.h"
#include "Produit.h"
#include "Order.h"
#include <vector>


class Magasin {
public : 
    void ajouterProduit(const Produit& produit);
    void ajouterClient(const Client& client);
    void ajouterCommande(const Order& order);
private : 
    std::vector<Product> _products;
    std::vector<Client> _clients;
    std::vector<Order> _orders;

};

#endif