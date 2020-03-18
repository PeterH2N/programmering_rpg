#ifndef PARTY_H
#define PARTY_H
#include <iostream>
#include <vector>
#include <algorithm>

namespace party
{
    class NPC
    {
    public:
        std::string character_name;
        int level;
        int xp;

    };

    class Party
    {
    private:
        std::vector<NPC> characters;
    public:

        Party(std::vector<NPC> characters);

        void get_names();
        void print();
        void sort_names();
    };
}
#endif // PARTY_H
