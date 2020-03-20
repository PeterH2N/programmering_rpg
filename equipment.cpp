#include "equipment.h"
namespace equipment
{
    equipment::equipment(std::string name, int price, equip_type type, int weight, std::string description, bool available)
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
    equipment::equip_type equipment::get_type()
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

    std::string equipment::print_type()
    {
        switch(this->type)
        {
        case equip_type::weapon:
            return "weapon";
        case equip_type::ammo:
            return "ammo";
        case equip_type::armor:
            return "armor";
        case equip_type::trinket:
            return "trinket";
        case equip_type::consumable:
            return "consumable";
        }
    }

    void equipment::print()
    {
        std::cout << this->name << ":\n" << print_type() <<"\n" << this->price << "\n" << this->weight << "\n" << this->description;
    }

    equipment wooden_sword(
            //name
            "Wooden Sword",
            //price
            10,
            //type
            equipment::equip_type::weapon,
            //weight
            500,
            //description
            "Sword made from oak",
            //availablility
            true
            );
}
