// Time Complexity
// Time complexity means how many operations are needed to solve a problem in its worst condition.
// It is often denoted by Big O notation.

// Lets take an example, I have to find out if there is 2 in an array or not. If there is a 2 in that array, in the worst
// condition it is at the last index (or not present). Then the loop has to run n times, where n is the size of the array.
// So the bigger the size of the array, the more operations will be performed.

// By using a graph where x-axis denotes the size of the array (n) and y-axis denotes the number of operations:
// If n = 1, number of operations = 1
// If n = 5, number of operations = 5, and so on.

// So lets denote the function of size (n) as f(n).
// Here, the number of operations is n, so f(n) = n.
// This situation is written as O(n), which is called linear time complexity.