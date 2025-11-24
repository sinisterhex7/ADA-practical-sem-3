// 6. Represent a Tree Using an Array


#include <iostream>
using namespace std;

int main() {
    int tree[100], n;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter elements level-wise: ";
    for (int i = 1; i <= n; i++)
        cin >> tree[i];

    cout << "Tree representation:\n";
    for (int i = 1; i <= n; i++)
        cout << "Node " << i << ": " << tree[i] << endl;
    return 0;
}
