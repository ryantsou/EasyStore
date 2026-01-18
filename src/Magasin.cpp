#include <iostream>

#include "Magasin.h"

    Magasin::Magasin(){}

    //void Magasin::ajouterProduit (const Product& product){
    //    _products.push_back(product);
    //}
    void Magasin::ajouterProduitAuPanierClient(const std::string& idClient, const Product& product){
        for (auto& client : _clients){
            if (client.id() == idClient){
                client.ajouterProduit(product);
                break;
            }
        }
    }
        
    void Magasin::ajouterClients (const Client& client){
        _clients.push_back(client);
    }
    void Magasin::ajouterOrder (const Order& order){
        _orders.push_back(order);
    }

    std::vector<Product> Magasin::tousLesProduits() const{
        return _products;
    }

    std::vector<Product> Magasin::ProductparNom(std::string& nomProduct) const{
        std::vector<Product> result;
        for (const auto& product : _products){
            if (product.titre() == nomProduct){
                result.push_back(product);
            }
        }
        return result;        
    }

    void Magasin::mettreAJourQuantiteProduit(const std::string& nomProduct, int nouvelleQuantite){
        for (auto& product : _products){
            if (product.titre() == nomProduct){
                product.set_quantite_disponible(nouvelleQuantite);
            }
        }
    }

    std::vector<Client> Magasin::tousLesClients() const{
        return _clients;
    }


    std::vector<Client> Magasin::ClientparId(const std::string& idClient) const{
        std::vector<Client> result;
        for (const auto& client : _clients){
            if (client.id() == idClient){
                result.push_back(client);
            }
        }
        return result;        
    }

    void Magasin::supprimerProduitDuPanierClient(const std::string& idClient, const std::string& nomProduct){
        for (auto& client : _clients){
            if (client.id() == idClient){
                client.supprimerProduit(nomProduct);
                break;
            }
        }
    }


    void Magasin::validerCommande(const std::string& idClient){
        for (const auto& client : _clients){
            if (client.id() == idClient){
                Order newOrder("order_" + idClient, idClient);
                _orders.push_back(newOrder);
                break;
            }
        }
    }

        //mettre à jour le statut de livraison d'une commande
        void Magasin::mettreAJourStatutLivraison(const std::string& order_id, bool estlivre){
            for (auto& order : _orders){
                if (order.order_id() == order_id){
                    order.setlivre(estlivre);
                    break;
                }
            }
        }

        //historique des commandes d'un client
        std::vector<Order> Magasin::historiqueCommandesClient(const std::string& idClient) const{
            std::vector<Order> result;
            for (const auto& order : _orders){
                if (order.client() == idClient){
                    result.push_back(order);
                }
            }
            return result;        
        }