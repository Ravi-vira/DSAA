#include <iostream>
using namespace std;

class ArrayUtils {
    int* arr;     // pointer to dynamic array
    int size;     // current size
public:
    // constructor
    ArrayUtils() {
        arr = new int[1000];
        size = 0;
    }

    // destructor
    ~ArrayUtils() {
        delete[] arr;
    }

    // insert elements into array
    void insert() {
        cout << "Enter size of array: ";
        cin >> size;
        cout << "Enter elements of array: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // remove element at given position
    void remove() {
        int pos;
        cout << "Enter position to delete (0-based index): ";
        cin >> pos;
        if (pos < 0 || pos >= size) {
            cout << "Invalid position!" << endl;
            return;
        }
        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Element removed." << endl;
    }

    // push element at the end
    void push() {
        int element;
        cout << "Enter element to push: ";
        cin >> element;
        arr[size] = element;
        size++;
        cout << "Element pushed." << endl;
    }

    // pop element from end
    void pop() {
        if (size == 0) {
            cout << "Array is empty, cannot pop!" << endl;
            return;
        }
        size--;
        cout << "Last element popped." << endl;
    }

    // search element
    void searchElement() {
        int element;
        cout << "Enter element to search: ";
        cin >> element;
        for (int i = 0; i < size; i++) {
            if (arr[i] == element) {
                cout << "Element found at index " << i << endl;
                return;
            }
        }
        cout << "Element not found." << endl;
    }

    // display array
    void display() {
        if (size == 0) {
            cout << "Array is empty." << endl;
            return;
        }
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayUtils arr;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert elements\n";
        cout << "2. Remove element\n";
        cout << "3. Push element\n";
        cout << "4. Pop element\n";
        cout << "5. Search element\n";
        cout << "6. Display array\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: arr.insert(); break;
            case 2: arr.remove(); break;
            case 3: arr.push(); break;
            case 4: arr.pop(); break;
            case 5: arr.searchElement(); break;
            case 6: arr.display(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
