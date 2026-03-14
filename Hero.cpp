#include"Hero.h"

Hero::Hero(){
    heroName = "";
    health = 0;
    basePower = 0;
}
Hero::Hero(string name,int h,int bp){
    heroName = name;
    health = h;
    basePower = bp;
}
Hero::~Hero(){}
string Hero::getName() const{
    return heroName;
}
int Hero::getHealth() const{
    return health;
}
int Hero::getPower() const{
    return basePower;
}
void Hero::takeDamage(int damage){
    if (damage>=health)
    {
        health = 0;
    }else{
    health -= damage;
    }
}
bool Hero::operator>(Hero other){
    if (this->getPower() > other.getPower())
    {
        return true;
    }else
    {
    return false;
    }
}
int Hero::operator+(Hero other){
    return this->getHealth() + other.getHealth();
}