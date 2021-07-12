#include <iostream>

#include "monsterEnum.h"

int main()
{
    std::cout << "Please choose a monster from the following list: " << '\n';
    const Monsters numberOfMonsters { monsters_NUMBER_OF_ITEMS};
    for (int i{0}; i < numberOfMonsters ; i++)
    {
        std::cout << i << ". " << printMonsterType(i)<< '\n' ;
    }
    
    int pickedMonster {};
    std::cin >> pickedMonster;

    std::cout << "You picked the following monster: " << printMonsterType(pickedMonster) << ".\n";
}