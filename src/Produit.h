#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <string>

class Produit {
    public :
        Produit (const std::string& titre, const std::string& description);
        const std::string& titre() const;
        const std::string& description() const;

    private : 
        std::string _titres;
        std::string _descriptions;

};

#endif