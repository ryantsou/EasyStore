#include "Client.h"
#include <iostream>

        Client::Client (const std::string& prenom, const std::string& nom)
            :_prenoms(prenom), _noms(nom){}
        const std::string& Client::prenom() const {
            return _prenoms;
        }
        const std::string& CLient::nom() const {
            return _noms;
        }