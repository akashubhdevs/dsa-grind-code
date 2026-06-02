### 1. The Frequency Counter
Given a vector of strings, count how many times each string appears. Output the result in alphabetical order (C++ std::map does this automatically because it sorts by key!).

Example Input: ["apple", "banana", "apple", "cherry", "banana", "apple"]

Expected Output:

apple: 3

banana: 2

cherry: 1

Hint: Iterate through the vector and use the map like this: myMap[word]++.