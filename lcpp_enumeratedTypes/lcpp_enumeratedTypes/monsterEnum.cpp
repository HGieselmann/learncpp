#include "monsterEnum.h"

std::string printMonsterType(int monster)
{
    switch (monster)
    {
    case monsters_orc:
        return "Orc";
    case monsters_goblins:
        return "Goblin";
    case monsters_trolls:
        return "Troll";
    case monsters_ogres:
        return "Ogre";
    case monsters_skeletons:
        return "Skeleton";
    default:
        return "This monster does not exist.";
    }
}
