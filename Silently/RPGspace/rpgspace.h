#ifndef RPGSPACE_H
#define RPGSPACE_H

#include <vector>
#include <QPixmap>
#include <string>
class Item{
private:
    std::string nameOfItem;
    std::string discriptionOfItem;
    std::vector<std::pair<std::string ,int>> Characteristics;
    QPixmap imageOfItem;
public:
    //Пустий базовий конструктор
    Item();


    //задання ім'я предмету
    //Прймае string (звичану назву) і передає у nameOfItem
    void setName(std::string name);


    //Задання опису
    //Приймає string і передає у  discriptionOfItem
    void setDiscription(std::string discription);


    //Задання бонусів які надає предмет
    //Приймає string(назва характеристики) і double(значення)
    //Передає у вектор Characteristics у вигляді пари
    void setCharacteristics(std::string nameCharacteristic,double value);


    //Задання зображення предмету
    //Приймає string(повний шлях до зображення і передає у imageOfItem
    void setimage(std::string name);

    std::string getnameOfitem()const;
    std::string getdiscriptionOfItem()const;
    std::vector<std::pair<std::string, int>> getCharacteristics() const;
    QPixmap getImageOfItem() const;
};
class Inventory{
private:
    std::vector<Item> itemInInventory;
public:
    //Пустий базовий класс
    Inventory();

    //Додавання предмету
    //Приймає об'єкт классу Item і виконуює push_back до вектора
    void addItem();

    //Видалення предмату
    //Приймає об'єкт классу Item і видаляє його з вектора
    void deleteItem();

    //Геттер
    //Повертає вектор всіх предметів
    std::vector<Item>& getItems() const;
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
