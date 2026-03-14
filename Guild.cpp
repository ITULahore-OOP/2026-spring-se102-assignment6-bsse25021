#include"Guild.h"
#include"Hero.h"


Guild::Guild(string name){
    guildName = name;
    memberCount = 0;
    for (int i = 0; i < 15; i++)
    {
        roster[i] = nullptr;
    }
}
Guild::~Guild(){
    cout << "The guild " << guildName << " has been disbanded!" << endl;
}
int Guild::calculateTotalGuildPower() const{
    int total = 0;
    for (int i = 0; i < memberCount; i++)
    {
        total += roster[i]->getPower();
    }
    return total;
}
void Guild::displayGuildStats() {
    cout << "Guild Name: " << guildName << endl;
    cout << "Total Members: " << memberCount << "/15" << endl;
    for (int i = 0; i < memberCount; i++) {
        cout<< roster[i]->getName()<<endl;
    }
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}
void Guild::operator+=(Hero* newHero){
  if(memberCount >= 15 || newHero == nullptr){
        cout << "Guild is at full capacity!" << endl;
        return;
    }
    roster[memberCount] = newHero;
    memberCount++;
}
ostream& operator<<(ostream& os, const Guild& g) {
    os << "Guild: " << g.guildName << endl;
    os << "Members: " << g.memberCount << endl;
    for (int i = 0; i < g.memberCount; i++) {
        os << "- " << g.roster[i]->getName()
           << " (Power: " << g.roster[i]->getPower() << ")" << endl;
    }
    return os;
}