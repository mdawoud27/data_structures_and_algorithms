# Algorithms and Problem Solving Approaches

## What is an Algorithms?

    A process or set of steps to accomplish a certain task.

## How do you improve?

- **Devise** a plan for solving problems - _[this section](./README.md)_
- **Master** common problem solving patterns - _[here](../ps_patterns/README.md)_

## Problem Solving Strategies

    A SIMPLE, FOOLPROOF, MAGICAL, MIRACULOUS, FAIL-SAFE APPROACH

- _NOT REALLY_ - _BUT IT'S STILL HELPFUL_

## Problem Solving

### 1. Understand the Problem

```text
Write a function which takes two numbers and returns their sum.
```

1.  Can I restate the problem in my own words?

    ```text
    "Implement addition"
    ```

2.  What are the inputs that go into the problem?

    ```text
    - ints?
    - floats?
    - what about string for large numbers?
    ```

3.  What are the outputs that should come from the solution to the problem?

    ```text
    - int? float? string?
    ```

4.  Can the outputs be determined from the inputs? In other words, do I have enough information to solve the problem? (You may not be able to answer this question until you set about solving the problem. That's okay; it's still worth considering the question at this early stage.)

    ```text
    yeah!
    ```

5.  How should I label the important pieces of data that are a part of the problem?

    ```text
    sum
    ```

### 2. Explore Concrete Examples

    Write a function which takes in a string and returns counts of each character in the string.

- Start with Simple Examples

  ```js
  charCount("aaa"); // {a: 3}
  charCount("hello"); // {h: 1, e: 1, l: 2, o:1}
  ```

- Progress to More Complex Examples

  ```text
  What about the following examples?
  - "my phone number is 2132"
  - "Hello hi"
  ```

- Explore Examples with Empty Inputs

  ```js
  charCount(""); // do you want return {} or null or error # edge cases
  ```

- Explore Examples with Invalid Inputs

  ```text
  What about if user pass a number, object? # edge cases
  ```

### 3. Break It Down

```text
Write a function which takes in a string and returns counts of each character in the string.
```

بالورقة والقلم قبل م تكتب اي سطر كود

- Explicitly write out the steps you need to take.

  ```text
  // do something
  // return an object with keys that are lowercase alphanumeric chars in the string, values should be the counts of those chars
  --------------------------------------------------
  - make object to return at end
  - loop over string for each character...
    // if the char is a number/letter AND key in object, add one to count
    // if the char is a number/letter AND not in object, add it to object and set value to 1
    // if character is something else (space, period, etc.) don't do anything
  - return object at end
  ```

### 4. Solve/Simplify

```text
Write a function which takes in a string and returns counts of each character in the string.
```

- Find the core difficulty in what you're trying to do
- Temporarily ignore that difficulty
- Write a simplified solution
- Then incorporate that difficulty back in

  ```js
  function charCount(str) {
    // make object to return at end
    const result = {};

    // loop over string for each character...
    for (let i = 0; i < str.length; ++i) {
      let char = str[i].toLowerCase();

      // if character is something else (space, period, etc.) don't do anything
      if (!(char >= "a" && char <= "z") || !(char >= "0" && char <= "9"))
        continue;

      // if the char is a number/letter AND key in object, add one to count
      if (result[char] > 0) {
        result[char]++;
        // if the char is a number/letter AND not in object, add it to object and set value to 1
      } else {
        result[char] = 1;
      }
    }

    // return object at end
    return result;
  }
  ```

### 5. Look Back and Refactor

Congrats on solving it, but you're not done!

#### Refactoring Questions

```text
Write a function which takes in a string and returns counts of each character in the string.
```

- Can you check the result?
- Can you derive the result differently?
- Can you understand it at a glance?
- Can you use the result or method for some other problem?
- Can you improve the performance of your solution?
- Can you think of other ways to refactor?
- How have other people solved this problem?

```js
function charCount(str) {
  const result = {};

  for (let char of str) {
    if (isAlphaNumeric(char)) {
      char = char.toLowerCase();
      result[char] = ++result[char] || 1;
    }
  }

  return result;
}

function isAlphaNumeric(char) {
  const code = char.charCodeAt(0);

  if (
    !(code > 47 && code < 58) && // numeric [0-9]
    !(code > 64 && code < 91) && // upper [A-Z]
    !(code > 96 && code < 123) // lower [a-z]
  ) {
    return false;
  }
  return true;
}
```
