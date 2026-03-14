#include"Warrior.h"


Warrior::Warrior(string name,int h,int bp,int rating) : Hero(name,h,bp){
    armorRating  = rating;
}
int Warrior::getArmor(){
    return armorRating;
}
int Warrior::calculateEffectiveHealth(){
    int EffectiveHealth;
    EffectiveHealth = getHealth() + (armorRating * 2);
    return EffectiveHealth;
}