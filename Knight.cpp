#include"Knight.h"


Knight::Knight(string name,int h,int bp,int rating,int cbonus) : Warrior(name,h,bp,rating){
    chargeBonus = cbonus;
}
int Knight::getChargeBonus(){
    return chargeBonus;
}
int Knight::calculateBurstDamage(){
    int BurstDamage;
    BurstDamage = getPower() + chargeBonus;
    return BurstDamage;
}
