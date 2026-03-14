#include"Spellblade.h"


SpellBlade::SpellBlade(string name,int h,int bp,int rating,int mp,int sp):Warrior(name,h,bp,rating),MagicalEntity(mp,sp){

}
int SpellBlade::calculateHybridDamage(){
    int HybridDamage;
    HybridDamage = getPower() + getSpellPower();
    return HybridDamage;
}
