#include "Produit.h"
#include <iostream>

    Produit (const std::string& titre, const std::string& description)
        :_titres(titre), _descriptions(description){}
    const std::string& Produit::titre() const{
        return _titres;
    }
    const std::string& Produit::description() const{
        return _descriptions;
    }