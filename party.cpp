#include "party.h"

namespace party
{
    Party::Party(std::vector<NPC> list)
    {
        for (NPC current : list)
        {
            this->characters.push_back(current);
        }
    }

    void Party::get_names()
    {
        std::string name;
        int level;
        int xp;

        std::cout << "Write the names of all the characters, and then their level and XP. Type 'q' when done\n";

        while (true)
        {
            std::cout << "Name: \n";
            std::cin >> name;
            if (name == "q")
                break;
            std::cout << "Level: \n";
            std::cin >> level;
            std::cout << "XP: \n";
            std::cin >> xp;
            characters.push_back({name,level,xp});

        }
    }
    void Party::print()
    {
        for (NPC current : characters)
        {
            std::cout << current.character_name << ", level " << current.level << "." << current.xp << std::endl;
        }
    }

    void Party::sort_names()
    {
        std::sort(characters.begin(), characters.end(),[&](const NPC& c1, const NPC& c2){
            return (c1.character_name < c2.character_name);
        });
    }

}

