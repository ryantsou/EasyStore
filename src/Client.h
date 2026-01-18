#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <string>

class Client {
    public: 
        Client (const std::string& prenom, const std::string& nom);
        const std::string& prenom() const;
        const std::string& nom() const;
    private:
        std::string& _prenoms;
        std::string& _noms;

};

#endif