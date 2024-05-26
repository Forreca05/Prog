#include "Product.h"

class ResaleProduct : public Product {
public:
    ResaleProduct(int id, float price, int profit_margin) : Product(id, price), profit_margin_(profit_margin) {};
    int get_profit_margin() const {return profit_margin_;}
    void set_profit_margin(int margin) {profit_margin_ = margin;}
    float get_sell_price() const override {return price_ * (100 + profit_margin_) / 100;}
private:
    int profit_margin_;
};