#include <iostream>
#include "party.h"
#include "equipment.h"

using namespace std;

int main()
{
    party::Party characters({{"Peter",1,2},{"Niklas",1,2},{"Tristan",1,2}});
    characters.sort_names();
    characters.print();
    return 0;
}
