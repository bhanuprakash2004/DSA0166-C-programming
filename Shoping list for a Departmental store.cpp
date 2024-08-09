#include <iostream>
#include <vector>
#include <string>
class ShoppingList {
private:
    struct Item {
        std::string code;
        double price;
    };
    std::vector<Item> list;
public:
    void addItem(std::string code, double price) {
        Item item = {code, price};
        list.push_back(item);
    }
    void deleteItem(std::string code) {
        for (auto it = list.begin(); it != list.end(); ++it) {
            if (it->code == code) {
                list.erase(it);
                break;
            }
        }
    }
     double getTotalValue() {
        double total = 0;
        for (const auto& item : list) {
            total += item.price;
        }
        return total;
    }
    void printList() {
        std::cout << "Shopping List:" << std::endl;
        for (const auto& item : list) {
            std::cout << "Code: " << item.code << ", Price: " << item.price << std::endl;
        }
    }
};
int main() {
    ShoppingList shoppingList;
    shoppingList.addItem("001", 10.99);
    shoppingList.addItem("002", 5.99);
    shoppingList.addItem("003", 7.99);
    shoppingList.printList();
std::cout << "Total Value: " << shoppingList.getTotalValue() << std::endl;
    shoppingList.deleteItem("002");
    shoppingList.printList();
    std::cout << "Total Value: " << shoppingList.getTotalValue() << std::endl;
    return 0;
}