#include "Product.h"
#include <iostream>
#include <iomanip>

class ResaleProduct : public Product {
    public:
        ResaleProduct(int id, float price, int profit_margin) : Product(id, price), profit_margin_(profit_margin) {}
        int get_profit_margin() const {return profit_margin_;}
        void set_profit_margin(int margin) { profit_margin_ = margin; }
        virtual float get_sell_price() const override {
            return price_ + (profit_margin_ / 100.0) * price_;
        }
    private:
        int profit_margin_;
};
