#include "equipment.h"
namespace equipment
{
    equipment::equipment(std::string name, int price, std::string type, int weight, std::string description, bool available)
    {
        if (name != "")
        this->name = name;

        this->price = price;
        this->type = type;
        this->weight = weight;
        if (description != "")
        this->description = description;

        this->availabe = available;
    }

    void equipment::make_avail()
    {
        this->availabe = true;
    }

    void equipment::make_unavail()
    {
        this->availabe = false;
    }

    std::string equipment::get_name()
    {
        return this->name;
    }

    int equipment::get_price()
    {
        return this->price;
    }
    std::string equipment::get_type()
    {
        return this->type;
    }
    int equipment::get_weight()
    {
        return this->weight;
    }

    std::string equipment::get_desc()
    {
        return this->description;
    }
    bool equipment::get_avail()
    {
        return this->availabe;
    }

    void equipment::print()
    {
        std::cout << this->name << "\n" << this->type <<"\n" << this->price << "\n" << this->weight << "\n" << this->description;
    }
}
