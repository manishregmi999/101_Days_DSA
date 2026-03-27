//Quadratic probing
#include <iostream>
using namespace std;

class HashTable {
    int size;
    int* table;

public:
    HashTable(int s) {
        size = s;
        table = new int[size];
        for (int i = 0; i < size; i++) {
         table[i] = -1; // -1 means empty slot
        }
           
    }

    // Hash function
    int hashFunction(int key) {
        return key % size;
    }

    // Insert using quadratic probing
    void insert(int key) {
        int index = hashFunction(key);
        int i = 0;
        int newIndex = index;

        // Quadratic probing: try (index + i^2) % size
        while (table[newIndex] != -1) {
            i++;
            if (i == size) { 
                cout << "Cannot insert " << key << endl;
                return;
            }
            newIndex = (index + i * i) % size;
        }

        table[newIndex] = key;
        cout << "Inserted " << key << " at index " << newIndex << endl;
    }

    // Display hash table
    void display() {
        cout << "\nHash Table:\n";
        for (int i = 0; i < size; i++) {
            cout << i << " -> ";
            if (table[i] != -1){
                cout << table[i]<<endl;
            }
                
            else
                cout << "-"<<endl;
        }
    }
};

int main() {
    HashTable ht(11); // Table size 11, prefer prime number like 2, 3, 5 7 11 13 17 19 for size, its best for wuadratic probing, rason you can search in gpt.

    ht.insert(12);
    ht.insert(22);
    ht.insert(32);
    ht.insert(42);
    ht.insert(15);
    ht.insert(25);

    ht.display();
}