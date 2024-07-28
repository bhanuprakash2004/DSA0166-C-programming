#include <iostream>
#include <vector>
#include <iomanip>  // for std::setw

class ShoppingCart {
private:
    struct Item {
        int codeNo;
        double price;
    };

    std::vector<Item> items;

public:
    // Add an item to the shopping list
    void addItem(int codeNo, double price) {
        Item newItem = {codeNo, price};
        items.push_back(newItem);
        std::cout << "Item with Code No: " << codeNo << " added to the list.\n";
    }

    // Delete an item from the shopping list
    void deleteItem(int codeNo) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->codeNo == codeNo) {
                items.erase(it);
                std::cout << "Item with Code No: " << codeNo << " deleted from the list.\n";
                return;
            }
        }
        std::cout << "Item with Code No: " << codeNo << " not found.\n";
    }

    // Print the total value of the order
    void printTotalValue() const {
        double total = 0;
        for (const auto& item : items) {
            total += item.price;
        }
        std::cout << "Total value of the order: $" << std::fixed << std::setprecision(2) << total << '\n';
    }

    // Print the list of items
    void printItems() const {
        std::cout << "Current shopping list:\n";
        std::cout << "Code No\tPrice\n";
        for (const auto& item : items) {
            std::cout << item.codeNo << '\t' << std::fixed << std::setprecision(2) << item.price << '\n';
        }
    }
};

int main() {
    ShoppingCart cart;

    cart.addItem(101, 29.99);
    cart.addItem(102, 15.50);
    cart.addItem(103, 45.75);

    cart.printItems();
    cart.printTotalValue();

    cart.deleteItem(102);
    cart.printItems();
    cart.printTotalValue();

    cart.deleteItem(999); // Trying to delete an item that does not exist

    return 0;
}
