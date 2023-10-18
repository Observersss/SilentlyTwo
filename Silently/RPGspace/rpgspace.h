#ifndef RPGSPACE_H
#define RPGSPACE_H

#include <vector>
#include <QPixmap>
#include <string>
class Item{
private:
    std::string nameOfItem;
    std::string discriptionOfItem;
    QPixmap imageOfItem;
public:
    Item();
    setName(std::string name);
    setDiscription(std::string discription);
    //нужно разобраться с заданием изображения предмету
    setimage(std::string name);
};
class Inventory{
private:

};

class Quest{

};

class Character
{
private:
    int health;
    double mana;
    double experience;
    int level;
    Inventory inventory;
    std::vector<Quest>activeQuest;
    QPixmap characterImage;
public:
    Character();
};


#endif // RPGSPACE_H
