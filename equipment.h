#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include <iostream>

namespace equipment
{
    class equipment
    {
    public:
        enum class equip_type : int{weapon,ammo,armor,trinket,consumable};
    private:
        std::string name;
        int price;
        equip_type type;
        int weight;
        std::string description;
        bool availabe;


    public:
        equipment(std::string name, int price, equip_type type, int weight, std::string description, bool available);
        void make_avail();
        void make_unavail();

        std::string get_name();
        int get_price();
        equip_type get_type();
        int get_weight();
        std::string get_desc();
        bool get_avail();

        std::string print_type();

        void print();
    };

    equipment wooden_sword(std::string name, int price, equipment::equip_type type, int weight, std::string description, bool available);
}
#endif // EQUIPMENT_H
