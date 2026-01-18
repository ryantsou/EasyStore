#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>

class Product {
    public:
        //Product () = default;
        Product (const std::string& titre, const std::string& description);
        const std::string& titre() const;
        const std::string& description() const;

        void set_titre(const std::string& titre);
        void set_description(const std::string& description);

        //quantité disponible
        int quantite_disponible() const;
        void set_quantite_disponible(int quantite_disponible);

        //prix unitaire
        double prix_unitaire() const;
        void set_prix_unitaire(double prix_unitaire);

        void print() const;

    private:
        std::string _titres;
        std::string _descriptions;
        int _quantite_disponible;
        double _prix_unitaire;
};

#endif 