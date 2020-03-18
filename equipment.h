#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include <iostream>

namespace equipment
{
    class equipment
    {
    private:
        std::string name;
        int price;
        std::string type;
        int weight;
        std::string description;
        bool availabe;

    public:
        equipment(std::string name, int price, std::string type, int weight, std::string description, bool available);
        void make_avail();
        void make_unavail();

        std::string get_name();
        int get_price();
        std::string get_type();
        int get_weight();
        std::string get_desc();
        bool get_avail();

        void print();
    };
}
#endif // EQUIPMENT_H
