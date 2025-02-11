# Analyzing Performance of Arrays and Objects

## When to use objects

_when you don't any ordering, objects are an excellent choice!_

### Big O of Objects

- Insertion => O(1)
- Removal => O(1)
- Searching => O(n)
- Access => O(1)

### Big O of Object Methods

- Object.keys => O(n)
- Object.values => O(n)
- Object.entries => O(n)
- hasOwnProperty => O(1)

```js
let instractor = {
  firstName: "Kelly",
  isInstractor: true,
  favoriteNumbers: [1, 2, 3, 4],
};
```
