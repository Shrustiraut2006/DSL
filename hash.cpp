#include <iostream>
#include <vector>
using namespace std;
int main() {
    int m, n;
    cout << "Enter hash table size (m): ";
    cin >> m;
    vector<int> hashTable(m, -1); 
    vector<int> keys;
    cout << "Enter number of keys: ";
    cin >> n;
    keys.resize(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter key: ";
        cin >> keys[i];
    }
    cout << "\nHash Indexes (k mod m) for each key:\n";
    for (int i = 0; i < n; i++) {
        int index = keys[i] % m;
        cout << "Key " << keys[i] << " -> " << index << endl;
    }
    for (int i = 0; i < n; i++) {
        int index = keys[i] % m;
        while (hashTable[index] != -1) {
            index = (index + 1) % m;
        }
        hashTable[index] = keys[i];
    }
    cout << "\nHash Table after insertion:\n";
    for (int i = 0; i < m; i++) {
        if (hashTable[i] != -1)
            cout << "Index " << i << " --> " << hashTable[i] << endl;
        else
            cout << "Index " << i << " --> Empty" << endl;
    }
    return 0;
}