#include "Order.h"

#include<iostream>

    Order::Order (const std::string& order_id, const std::string client)
        :_order_id(order_id), _client(client){}
    const std::string& Order::order_id() const{
        return _order_id;
    }
    const std::string& Order::client() const{
        return _client;
    }

    void Order::set_client(const std::string& client){
        _client = client;
    }
    bool Order::estlivre() const{
        return _estlivre;
    }
    void Order::setlivre(bool e){
        _estlivre = e;
    }
    void Order::print() const{
        std::cout << "Order ID: " << _order_id << ", Client: " << _client << ", Est Livré: " << (_estlivre ? "Oui" : "Non") << std::endl;
    }