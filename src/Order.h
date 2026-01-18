#ifndef ORDER_HPP
#define ORDER_HPP

#include <vector>
#include "client.h"

class Order{
    public:
        Order (Client& client, std::vector<std::string>& panier);
        const Client& client() const;
        const std::vector<std::string>& panier() const;
    private:

};

#endif