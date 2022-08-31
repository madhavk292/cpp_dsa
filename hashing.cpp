#include <bits/stdc++.h> 
using namespace std;

class hashclass {
    int bucket;
    list < int > * hashtable;

    public: hashclass(int a) {
        bucket = a;
        hashtable = new list < int > [bucket];
    }

    void insert_element(int key) {
        int indexkey = hashFunction(key);
        hashtable[indexkey].push_back(key);
    }

    void delete_element(int key) {
        int indexkey = hashFunction(key);
        list < int > ::iterator i = hashtable[indexkey].begin();
        for (; i != hashtable[indexkey].end(); i++) {
            if ( * i == key) {
                break;
            }
        }
        if (i != hashtable[indexkey].end()) {
            hashtable[indexkey].erase(i);
        }
    }

    int hashFunction(int a) //Function used to map values to key
    {
        return (a % bucket);
    }

    void display_table() {
        for (int i = 0; i < bucket; i++) {
            cout << i;
            list < int > ::iterator j = hashtable[i].begin();
            for (; j != hashtable[i].end(); j++) {
                cout << "-->" << * j;
            }
            cout << endl;
        }
    }

    void search_element(int key) {
        int a = 0;
        int indexkey = hashFunction(key);
        list < int > ::iterator i = hashtable[indexkey].begin();
        for (; i != hashtable[indexkey].end(); i++) {
            if ( * i == key) {
                a = 1;
                break;
            }
        }
        if (a == 1) {
            cout << "The element is present in the hashtable." << endl;
        } else {
            cout << "Element not present" << endl;
        }
    }~hashclass() {
        delete[] hashtable;
    }
};

int main() {
    int bucketn, ch, element;

    cout << "Enter the no. of buckets" << endl;
    cin >> bucketn;
    hashclass hashelement(bucketn);
    while (1) {
        cout << "1.insert element to the hashtable" << endl;
        cout << "2.search element from the hashtable" << endl;
        cout << "3.delete element from the hashtable" << endl;
        cout << "4.display elements of the hashtable" << endl;
        cout << "5.exit" << endl;
        cout << "enter your choice" << endl;
        cin >> ch;
        switch (ch) {
        case 1:
            cout << "enter the element" << endl;
            cin >> element;
            hashelement.insert_element(element);
            break;
        case 2:
            cout << "enter the element you want to search" << endl;
            cin >> element;
            hashelement.search_element(element);
            break;
        case 3:
            cout << "enter the element to be deleted" << endl;
            cin >> element;
            hashelement.delete_element(element);
            break;
        case 4:
            hashelement.display_table();
            break;
        case 5:
            return 0;
        default:
            cout << "enter a valid value" << endl;
        }
    }

    return 0;
}