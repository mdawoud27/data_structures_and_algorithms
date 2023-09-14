## Properties of vectors

    - Add from back -> O(1)
    - Delete from back -> O(1)

    - Add from anywhere -> O(N)
    - Delete from anywhere -> O(N)

    - Access with ([] or .at()) -> O(1)
    - Search with find() -> O(log N)

    - Advantages:
        - Implemented as dynamic arrays
    
    - Drawbacks:
        - Expensive reallocation
        - Requires contiguous memory