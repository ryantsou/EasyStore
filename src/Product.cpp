#include "Product.h"
#include <iostream>
#include <string>

        Product::Product (const std::string& titre, const std::string& description)
            :_titres(titre), _descriptions(description){}

        const std::string& Product::titre() const {
            return _titres;
        }
        const std::string& Product::description() const {
            return _descriptions;
        }

        void Product::set_titre(const std::string& titre){
            _titres = titre;
        }

        void Product::set_description(const std::string& description){
            _descriptions = description;
        }

        //quantité disponible
        int Product::quantite_disponible() const{
            return _quantite_disponible;
        }
        void Product::set_quantite_disponible(int quantite_disponible){
            _quantite_disponible = quantite_disponible;
        }

        //prix unitaire
        double Product::prix_unitaire() const{
            return _prix_unitaire;
        }
        void Product::set_prix_unitaire(double prix_unitaire){
            _prix_unitaire = prix_unitaire;
        }

        void Product::print() const {
            std::cout << "nom produit : " << _titres << std::endl;
            std::cout << "description : " << _descriptions << std::endl;
            std::cout << "quantité disponible : " << _quantite_disponible << std::endl;
            std::cout << "prix unitaire : " << _prix_unitaire << std::endl;
        }