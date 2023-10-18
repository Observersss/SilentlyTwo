#include "rpgspace.h"

Character::Character()
{

}
Item::Item(){

}

Item::setName(std::string name){
    nameOfItem=name;
}
Item::setDiscription(std::string discription){
    discriptionOfItem=discription;
}
Item::setimage(std::string name){
    QPixmap characterPixmap(":/images/.png"); // Загрузка изображения из файла

    myCharacter.setImage(characterPixmap); // Установка изображения для персонажа
    QPixmap characterImage = myCharacter.getImage(); // Получение изображения из персонажа
}
