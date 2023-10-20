#include "rpgspace.h"

Inventory::Inventory(){}

void Inventory::addItem(Item item){
    itemInInventory.push_back(item);
}

void Inventory::deleteItem(Item item){
    for (auto it = itemInInventory.begin(); it != itemInInventory.end(); ++it) {

        if (it->getIndex() == item.getIndex()) {
            // Используйте метод erase(), чтобы удалить элемент из вектора
            itemInInventory.erase(it);
            // Выход из цикла после удаления элемента (по желанию)
            break;
        }
    }
}

std::vector<Item> Inventory::getItems() const {
    return itemInInventory;
}
