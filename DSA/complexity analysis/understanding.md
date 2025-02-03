# **Complexity Analysis in DSA**

Complexity analysis helps us evaluate the efficiency of an algorithm in terms of **time** and **space** requirements. It allows us to compare different algorithms and choose the optimal one for a given problem.

---

## **1. Types of Complexity**
1. **Time Complexity**: Measures how the execution time of an algorithm increases as the input size grows.
2. **Space Complexity**: Measures how the memory usage of an algorithm increases as the input size grows.

---

## **2. Time Complexity**
Time complexity is expressed using **Big-O notation (O)**, which represents the worst-case scenario for an algorithm.

### **Common Time Complexities**
| Complexity | Notation | Example Algorithm |
|------------|----------|------------------|
| **Constant Time** | O(1) | Accessing an element in an array (`arr[i]`) |
| **Logarithmic Time** | O(log N) | Binary Search |
| **Linear Time** | O(N) | Traversing an array |
| **Linearithmic Time** | O(N log N) | Merge Sort, QuickSort (average case) |
| **Quadratic Time** | O(N²) | Bubble Sort, Selection Sort |
| **Cubic Time** | O(N³) | Floyd-Warshall Algorithm |
| **Exponential Time** | O(2^N) | Recursive Fibonacci |
| **Factorial Time** | O(N!) | Traveling Salesman Problem (Brute Force) |

### **Example: Finding an Element in an Array**
#### **1. Linear Search (O(N))**
```cpp
bool search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return true;
    }
    return false;
}
```
- Worst Case: The key is at the last position → **O(N)**.

#### **2. Binary Search (O(log N))**
```cpp
bool binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return true;
        else if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}
```
- Works on sorted arrays.
- Reduces search space by half → **O(log N)**.

---

## **3. Space Complexity**
Space complexity measures the total memory used by an algorithm, including:
1. **Input space**: Memory required to store input.
2. **Auxiliary space**: Extra memory used for variables, recursion stack, etc.

### **Example: Factorial Using Recursion**
```cpp
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```
- **Time Complexity**: O(N) (since it calls itself N times).
- **Space Complexity**: O(N) (because of recursive function call stack).

---

## **4. Best, Worst, and Average Case Analysis**
1. **Best Case**: Minimum time taken by an algorithm for some input.
2. **Worst Case**: Maximum time taken (usually considered in complexity analysis).
3. **Average Case**: Expected time taken for random inputs.

### **Example: QuickSort**
- **Best Case**: O(N log N) (Pivot divides array equally).
- **Worst Case**: O(N²) (Pivot is always the smallest or largest element).
- **Average Case**: O(N log N).

---

## **5. Trade-Off Between Time and Space**
- Some algorithms are **faster but use more memory** (e.g., Merge Sort).
- Some algorithms are **slower but use less memory** (e.g., Insertion Sort).
- Optimizing both is key in real-world applications.

---