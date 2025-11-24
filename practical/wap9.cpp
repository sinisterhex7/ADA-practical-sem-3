// 9. Insertion and Deletion in Max Heap

#include <iostream>
using namespace std;

// Heapify function: fixes the heap at index i in a heap of size n
void heapify(int heap[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left] > heap[largest])
        largest = left;

    if (right < n && heap[right] > heap[largest])
        largest = right;

    if (largest != i) {
        swap(heap[i], heap[largest]);
        heapify(heap, n, largest);
    }
}

// Insert value into heap of current size n
void insertHeap(int heap[], int &n, int val) {
    heap[n] = val;
    int i = n;
    n++;   // increase size of heap

    // Fix max heap by shifting up
    while (i > 0 && heap[(i - 1) / 2] < heap[i]) {
        swap(heap[(i - 1) / 2], heap[i]);
        i = (i - 1) / 2;
    }
}

// Delete root (maximum) from heap
int deleteRoot(int heap[], int &n) {
    if (n <= 0) return -1;  // heap empty

    int root = heap[0];
    heap[0] = heap[n - 1];
    n--; // reduce heap size

    heapify(heap, n, 0);

    return root;
}

// Example usage
int main() {
    int heap[100];
    int n = 0;

    insertHeap(heap, n, 50);
    insertHeap(heap, n, 30);
    insertHeap(heap, n, 40);
    insertHeap(heap, n, 10);
    insertHeap(heap, n, 60);

    cout << "Max deleted: " << deleteRoot(heap, n) << endl;

    cout << "Heap after deletion: ";
    for (int i = 0; i < n; i++) cout << heap[i] << " ";
}

