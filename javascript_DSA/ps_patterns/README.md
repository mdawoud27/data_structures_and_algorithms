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

- _Creating pointers or values that correspond to an index or position and move towards the beginning, end or middle based on a certain condition_

- _Very efficient for solving problems with minimal space complexity as well_

Example

```text
Write a function called sumZero which accepts a sorted array of integers. The function should find the first pair where the sum is 0. Return an array that includes both values that sum to zero or undefined if a pair does not exist
```

```js
sumZero([-3, -2, -1, 0, 1, 2, 3]); // [-3,3]
sumZero([-2, 0, 1, 3]); // undefined
sumZero([1, 2, 3]); // undefined
```

```js
// NAIVE SOLUTION
function sumZero(arr) {
  for (let i = 0; i < arr.length; i++) {
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[i] + arr[j] === 0) {
        return [arr[i], arr[j]];
      }
    }
  }
}
// Time Complexity - O(N^2)
// Space Complexity - O(1)
```

```js
// REFACTOR
function sumZero(arr) {
  let left = 0;
  let right = arr.length - 1;
  while (left < right) {
    let sum = arr[left] + arr[right];
    if (sum === 0) {
      return [arr[left], arr[right]];
    } else if (sum > 0) {
      right--;
    } else {
      left++;
    }
  }
}
// Time Complexity - O(N)
// Space Complexity - O(1)
```

### Sliding Window

### Divide and Conquer

### Dynamic Programming

### Greedy Algorithms

### Backtracking

### Many more
