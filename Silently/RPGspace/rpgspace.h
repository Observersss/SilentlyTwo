#ifndef RPGSPACE_H
#define RPGSPACE_H

#include <vector>
#include <QPixmap>
#include <string>

//Перечислення можливих варіантів спорядження, буде використовуватись для классу активного спорядження
enum Equipment{
    WEAPON,
    PETS,
    HELMET,
    LEGGINGS,
    BOOTS,
    CHESTPLATE,
    RING,
    GLOVES,
    CLOAKS
};

class Item{
private:
    std::string nameOfItem;
    std::string discriptionOfItem;
    std::vector<std::pair<std::string ,int>> Characteristics;
    Equipment typeItem;
    QPixmap imageOfItem;
    static int itemCount; // Статична змінна для підрахунку елементів
    int index; // Індекс предмета

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

    //Задання типу предмета
    //Приймає int і передає у typeItem
    void setEqipment(Equipment type);

    //Задання зображення предмету
    //Приймає string(повний шлях до зображення і передає у imageOfItem
    void setImage(std::string name);

    //Геттери
    std::string getnameOfitem()const;
    std::string getdiscriptionOfItem()const;
    std::vector<std::pair<std::string, int>> getCharacteristics() const;
    Equipment getTypeItem()const;
    QPixmap getImageOfItem() const;
    int getIndex()const;
};
class Inventory{
private:
    std::vector<Item> itemInInventory;
public:
    //Пустий базовий класс
    Inventory();

    //Додавання предмету
    //Приймає об'єкт классу Item і виконуює push_back до вектора
    void addItem(Item item);

    //Видалення предмату
    //Приймає об'єкт классу Item і видаляє його з вектора
    void deleteItem(Item item);

    //Геттер
    //Повертає вектор всіх предметів
    std::vector<Item> getItems() const;
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
