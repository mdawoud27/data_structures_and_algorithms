# Common Problem Solving Patterns

## Some Patterns

### Frequency Counter

- _This pattern uses objects or sets to collect values/frequencies of values_
- _This can often avoid the need for nested loops or O(N^2) operations with arrays / strings_

Example

```text
Write a function called `same`, which accepts two arrays.
The function should return true if every value in the array has it's corresponding value squared in the second array.
The frequency of values must be the same.
```

```js
// Naive solution
function same(arr1, arr2) {
  if (arr1.length !== arr2.length) {
    return false;
  }
  for (let i = 0; i < arr1.length; i++) {
    let correctIndex = arr2.indexOf(arr1[i] ** 2);
    if (correctIndex === -1) {
      return false;
    }
    arr2.splice(correctIndex, 1);
  }
  return true;
} // Time Complexity - N^2
```

```js
// Refactored solution
function same(arr1, arr2) {
  if (arr1.length !== arr2.length) {
    return false;
  }
  let frequencyCounter1 = {};
  let frequencyCounter2 = {};
  for (let val of arr1) {
    frequencyCounter1[val] = (frequencyCounter1[val] || 0) + 1;
  }
  for (let val of arr2) {
    frequencyCounter2[val] = (frequencyCounter2[val] || 0) + 1;
  }
  for (let key in frequencyCounter1) {
    if (!(key ** 2 in frequencyCounter2)) {
      return false;
    }
    if (frequencyCounter2[key ** 2] !== frequencyCounter1[key]) {
      return false;
    }
  }
  return true;
} // Time Complexity - O(n)
```

### Multiple Pointers

### Sliding Window

### Divide and Conquer

### Dynamic Programming

### Greedy Algorithms

### Backtracking

### Many more
