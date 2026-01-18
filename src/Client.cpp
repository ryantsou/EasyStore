#include "Client.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
    Client::Client (const std::string& id, std::string& prenom, const std::string& nom, const std::vector<Product>& panier_achat)
        :_ids(id), _prenoms(prenom), _noms(nom) {}
    const std::string& Client::id() const{
        return _ids;
    }
    const std::string& Client::prenom() const {
        return _prenoms;
    }
    const std::string& Client::nom() const{
        return _noms;
    }
    void Client::set_id(const std::string& id){
        _ids = id;
    }

    void Client::set_prenom(const std::string& prenom){
        _prenoms = prenom;
    }
    void Client::set_nom(const std::string& nom){
        _noms = nom;
    }

    const std::vector<Product>& Client::panier_achat() const {
        return _panier_achat;
    }

    //ajout produit dans panier d'achat
        void Client::ajouterProduit(const Product& product){
            _panier_achat.push_back(product);
        }
        //vider panier d'achat
        void Client::viderPanier(){
            _panier_achat.clear();
        }
        //modifier produit dans panier d'achat
        void Client::modifierProduit(const std::string& nomProduct, int nouvelleQuantite){
            for (auto& product : _panier_achat){
                if (product.titre() == nomProduct){
                    product.set_quantite_disponible(nouvelleQuantite);
                }
            }
        }
        //supprimer produit du panier d'achat
        void Client::supprimerProduit(const std::string& nomProduct){
            _panier_achat.erase(
                std::remove_if(
                    _panier_achat.begin(),
                    _panier_achat.end(),
                    [&](const Product& product){ return product.titre() == nomProduct; }
                ),
                _panier_achat.end()
            );
        }

        void Client::print() const{
            std::cout << "Client ID: " << _ids << ", Prenom: " << _prenoms << ", Nom: " << _noms << std::endl;
            std::cout << "Panier d'achat:" << std::endl;
            for (const auto& product : _panier_achat){
                product.print();
            }  
        }