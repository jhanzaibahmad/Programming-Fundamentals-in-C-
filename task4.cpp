#include<iostream>
using namespace std;

class ArrayOperations {
private:
    int* array;
    int size;

public:
    // initialize the array and size
    ArrayOperations(int initialSize)
    {
        size = initialSize;
        array = new int[size];
    }

    
    void traverse() 
    {
        for (int i = 0; i < size; i++) 
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    void insertElement(int index, int element) 
    {
        if (index < 0 || index >= size)
        {
            cout << "Error: Index out of bounds." << endl;
            return;
        }
        array[index] = element;
    }
    void deleteElement(int index) {
        if (index < 0 || index >= size) 
        {
            cout << "Error: Index out of bounds." << endl;
            return;
        }
        for (int i = index; i < size - 1; i++)
        {
            array[i] = array[i + 1];
        }
        size--;
    }

    int searchElement(int key)
    {
        for (int i = 0; i < size; i++) 
        {
            if (array[i] == key) {
                return i;  // Element found, return the index
            }
        }
        return -1;  // Element not found
    }

    void updateElement(int index, int newValue) 
    {
        if (index < 0 || index >= size) 
        {
            cout << "Error: Index out of bounds." << endl;
            return;
        }
        array[index] = newValue;
    }
};

int main() {
    // Example usage
    ArrayOperations arrayOps(5);

    // Traverse
    cout << "Traversing array: ";
    arrayOps.traverse();

    // Insertion
    arrayOps.insertElement(2, 10);

    // Deletion
    arrayOps.deleteElement(1);

    // Traverse after deletion
    cout << "Traversing array after deletion: ";
    arrayOps.traverse();

    // Update
    arrayOps.updateElement(0, 5);

    // Traverse after update
    cout << "Traversing array after update: ";
    arrayOps.traverse();

    return 0;
}
