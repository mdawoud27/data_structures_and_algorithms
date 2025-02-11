# Big O Notation in JavaScript

Big O notation is used to describe the efficiency of an algorithm in terms of time and space complexity. It provides a high-level understanding of how an algorithm's performance scales with input size.

## Time Complexity Classes

### 1. **O(1) - Constant Time**

An algorithm runs in constant time if its execution time does not change regardless of input size.

Example

```js
function getFirstElement(arr) {
  return arr[0]; // Always takes the same amount of time
}
```

### 2. **O(log n) - Logarithmic Time**

Algorithms with logarithmic complexity reduce the problem size with each step, often seen in binary search.

Example

```js
function binarySearch(arr, target) {
  let left = 0,
    right = arr.length - 1;
  while (left <= right) {
    let mid = Math.floor((left + right) / 2);
    if (arr[mid] === target) return mid;
    else if (arr[mid] < target) left = mid + 1;
    else right = mid - 1;
  }
  return -1;
}
```

### 3. **O(n) - Linear Time**

An algorithm runs in linear time if its execution time grows proportionally with input size.

Example

```js
function linearSearch(arr, target) {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === target) return i;
  }
  return -1;
}
```

### 4. **O(n log n) - Linearithmic Time**

This complexity is commonly seen in efficient sorting algorithms like Merge Sort and Quick Sort.

Example

```js
function mergeSort(arr) {
  if (arr.length <= 1) return arr;

  let mid = Math.floor(arr.length / 2);
  let left = mergeSort(arr.slice(0, mid));
  let right = mergeSort(arr.slice(mid));

  return merge(left, right);
}

function merge(left, right) {
  let result = [],
    i = 0,
    j = 0;
  while (i < left.length && j < right.length) {
    if (left[i] < right[j]) result.push(left[i++]);
    else result.push(right[j++]);
  }
  return result.concat(left.slice(i)).concat(right.slice(j));
}
```

### 5. **O(n^2) - Quadratic Time**

This occurs in algorithms that involve nested loops, like Bubble Sort.

Example

```js
function bubbleSort(arr) {
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
      }
    }
  }
  return arr;
}
```

### 6. **O(2^n) - Exponential Time**

Exponential complexity appears in algorithms that solve problems by branching into multiple recursive calls, like the Fibonacci sequence.

Example

```js
function fibonacci(n) {
  if (n <= 1) return n;
  return fibonacci(n - 1) + fibonacci(n - 2);
}
```

### 7. **O(n!) - Factorial Time**

Factorial complexity is seen in algorithms that generate all possible permutations, such as the Traveling Salesman Problem.

Example

```js
function factorial(n) {
  if (n === 0) return 1;
  return n * factorial(n - 1);
}
```

## Space Complexity

Space complexity refers to the amount of memory an algorithm uses relative to its input size.

Where as time complexity measures the time to run program, space complexity measures memory usage of a specific program

### What makes space complexity increase?

- Assigning varables
- creating new data structures
- function calling and allocation

### 1. **O(1) - Constant Space**

An algorithm uses constant space if it requires the same amount of memory regardless of input size.

Example

```js
function addNumbers(a, b) {
  return a + b; // Uses only a few variables
}
```

### 2. **O(n) - Linear Space**

An algorithm uses linear space if it allocates additional memory proportional to input size.

Example

```js
function copyArray(arr) {
  let newArr = [...arr]; // Creates a new array of the same size
  return newArr;
}
```

### 3. **O(n^2) - Quadratic Space**

Algorithms that store large intermediate data structures, like adjacency matrices in graphs, have quadratic space complexity.

Example

```js
function createMatrix(n) {
  let matrix = [];
  for (let i = 0; i < n; i++) {
    matrix.push(new Array(n).fill(0));
  }
  return matrix;
}
```

## Summary Table

| Big O Notation | Complexity Type      | Example                                     |
| -------------- | -------------------- | ------------------------------------------- |
| O(1)           | Constant Time/Space  | Accessing an array index, simple arithmetic |
| O(log n)       | Logarithmic Time     | Binary Search                               |
| O(n)           | Linear Time/Space    | Linear Search, Copying an array             |
| O(n log n)     | Linearithmic Time    | Merge Sort                                  |
| O(n^2)         | Quadratic Time/Space | Bubble Sort, Adjacency Matrix               |
| O(2^n)         | Exponential Time     | Recursive Fibonacci                         |
| O(n!)          | Factorial Time       | Generating permutations                     |

## Conclusion

Understanding Big O notation helps in selecting the most efficient algorithm for a problem. The goal is to minimize time and space complexity while maintaining readability and correctness.
