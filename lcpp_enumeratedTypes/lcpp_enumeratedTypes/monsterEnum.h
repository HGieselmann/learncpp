#include <string>

enum Monsters : int {
    monsters_orc,
    monsters_goblins,
    monsters_trolls,
    monsters_ogres,
    monsters_skeletons,
    monsters_NUMBER_OF_ITEMS,
};

std::string printMonsterType(int monster);