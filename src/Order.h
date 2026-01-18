#ifndef ORDER_HPP
#define ORDER_HPP

#include <string>
#include <iostream>

class Order {
    public : 
        //Order () = default;
        Order (const std::string& order_id, const std::string client);
        const std::string& order_id() const;
        const std::string& client() const;

        void set_client(const std::string& client);
        bool estlivre() const;
        void setlivre(bool e);
        void print() const;

    private :
        std::string _order_id;
        std::string _client;
        bool _estlivre{false};
};

#endif