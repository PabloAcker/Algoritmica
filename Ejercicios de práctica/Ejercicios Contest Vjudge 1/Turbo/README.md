Frane has been given the task of sorting an array of numbers. The array consists of NN integers, each between 11 and NN (inclusive), with each of those appearing exactly once in the array. Frane has come up with the following sorting algorithm which operates in NN phases, and named it turbosort:

In the first phase, the number 11 is moved to position 11 by repeatedly swapping consecutive elements.

In the second phase, the number NN is moved to position NN in the same manner.

In the third phase, the number 22 is moved to position 22.

In the fourth phase, the number N-1N−1 is moved to position N-1N−1.

And so on...

In other words, when the number of the phase is odd, Frane will choose the smallest number not yet chosen, and move it to its final position. In even phases he chooses the largest number not yet chosen. Write a program which, given the initial array, output the number of swaps in each phase of the algorithm.

Input
The first line contains an integer NN (1 \le N \le 100\, 0001≤N≤100000), the number of elements in the array. Each of the following NN lines contains an integer between 11 and NN (inclusive), the array to be sorted. The array will contain no duplicates.

Output
For each of the NN phases, output the number of swaps on a single line.
