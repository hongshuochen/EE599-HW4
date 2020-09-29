
# HW4 EE599 - Computing Principles for Electrical Engineers

- Plesae clone the repository, edit [README.md](README.md) to answer the questions, and fill up functions to finish the hw.
- For non-coding quesitions, you will find **Answer** below each question. Please write your answer there.
- For coding questions, please make sure that your code can run ```bazel run/test```. In this homework, you will need to fill up [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests).
- For submission, please push your answers to Github before the deadline.
- Deadline: TBD
- Total: 130 points. 100 points is considered full credit.

## Question 1 (10 Points. Easy)

Write several functions in [cpplib.cc](src/lib/cpplib.cc) to satisfy the following requirements:

- **copy_if:** Wirte a function ```vector<int> keepOdd(const vector<int>& input);``` that filters out the numbers that are even and keeps the odd numbers in vector(use std::copy_if) and returns a new vector that contains the result.
- **transform:** Write a function ```vector<int> transform(const vector<int>& input);``` that takes a vector of integers as input and outputs a new vector where output[i] = intput[i] + 1 if input[i] is odd or output[i] = intput[i]-1 if input[i] is even (use std::transform).
- **accumulate:** Write a function ```int sum(const vector<int>& input);``` that sums up all elements in a vector(use std::accumulate).

Write several tests using GTest for your function in [tests/q1_student_test.cc](tests/q1_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q1_student_test
```

## Question 2 (25 Points. Medium)
(Work in progress)
In this question, we will wirite few functions to measure a given binary tree.
- Given a binary tree, find its total number of nodes.
- Given a binary tree, find the sum of numbers from all its nodes.
- Given a binary tree, find its maximum depth. The maximum depth is defined as the number of nodes along the longest path from the root node down to the farthest leaf node. 

Example: 
Input: 
```
          1
          / \
        2   3
        / \ 
      4   5
            \ 
             6
```
Expecteation output: 4
- Given a binary tree, find the length of the diameter of the tree. The diameter of a binary tree is defined as the length of the longest path between any two nodes in a tree. This path may or may not pass through the tree root.
Example - 1: 
Input: 
```
          1
          / \
        2   3
       / \ 
      4   5
            \ 
             6
```
Expecteation output: 4 (the path is 6-5-2-1-3, and it passes the tree root.)

Example - 2: 
Input: 
```
          1
          / \
        2   3
       / \ 
      4   5
     /     \ 
    7       6
   /         \
  8           9
```
Expecteation output: 6 (the path is 8-7-4-2-5-6-9, and it does not pass the tree root.)

## Question 3 (10 Points. Easy)

Write a function swap that will swap the values of the inputs (two integers).
Implement this using

- **pass by references**

  ```void CPPLib::SwapByRefernce(int &input1, int &input2);```
- **pass by pointers**

  ```void CPPLib::SwapByPointer(int *input1, int *input2);```

Example :\
Before: x = 20, y = 30 \
We call Swap(x,y) \
After: x = 30, y = 20

Write several tests using GTest for your function in [tests/q3_student_test.cc](tests/q3_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q3_student_test
```

## Question 4 (20 Points. Easy)

- Write a function that takes a vector of integers as input. The output is the same vector where all duplicates are removed. Note that the output is the same vector means the function's return type should be void and do the modifications on the input vector.
  - Example: before: v=[1, 2, 2, 4], after : v=[1, 2, 4]
  - Solve this for the following cases:
    - You cannot use std::set
  
    ```void CPPLib::UniqeVectorNotBySet(std::vector<int> &input)```
    - You can use std::set

    ```void CPPLib::UniqeVectorBySet(std::vector<int> &input)```
- Write a function ```void CPPLib::ReverseVector(std::vector<int> &input)``` that takes a vector of integers as input. The output is the same vector but in the reversed order:
  - Example: before: [1, 2, 3], after:  [3, 2, 1]
- Write a function ```void CPPLib::OddVector(std::vector<int> &input)``` that takes a vector of integers as input. The output should be the same vector where all even numbers are removed.
  - Example: before: [1, 2, 3], after: [1, 3]
- Write a function ```std::vector<int> CPPLib::UnionVectors(std::vector<int> &input1, std::vector<int> &input2)``` that takes two vectors v1 and v2 and returns a new vector that is the **union** of the values in v1 and v2. All the value in return vector should be unique.
  - Example: input: (v1=[1, 2, 2, 3], v2=[3, 4, 4, 5]), output = [1, 2, 3, 4, 5]

Write several tests using GTest for your function in [tests/q4student_test.cc](tests/q4_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q4_student_test
```
