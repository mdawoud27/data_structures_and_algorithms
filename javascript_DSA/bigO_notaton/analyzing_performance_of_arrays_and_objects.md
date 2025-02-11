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

## When to use arrays

- when you need order
- when you need fast access/insertion and removal

### Big O of Arrays

- Insertion => It depends...
- Removal => It depends...
- Searching => O(n)
- Access => O(1)

### Big O of Arrays Operations

- push => O(1)
- pop => O(1)
- shift => O(n)
- unshift => O(n)
- concat => O(n)
- slice => O(n)
- splice => O(n)
- sort => 0(n \* log(n))
- forEach/map/filter/reduce/etc. => O(n)

```js
let names = ["mohamed", "ahmed", "omar", "dawoud"];
```
