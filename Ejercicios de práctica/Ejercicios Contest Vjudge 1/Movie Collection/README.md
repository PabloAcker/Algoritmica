Mr. K. I. has a very big movie collection. He has organized his collection in a big stack. Whenever he wants to watch one of the movies, he locates the movie in this stack and removes it carefully, ensuring that the stack doesn’t fall over. After he finishes watching the movie, he places it at the top of the stack.

Since the stack of movies is so big, he needs to keep track of the position of each movie. It is sufficient to know for each movie how many movies are placed above it, since, with this information, its position in the stack can be calculated. Each movie is identified by a number printed on the movie box.

Your task is to implement a program which will keep track of the position of each movie. In particular, each time Mr. K. I. removes a movie box from the stack, your program should print the number of movies that were placed above it before it was removed.

Input
On the first line a positive integer: the number of test cases, at most 100100. After that, for each test case output:

one line with two integers mm and rr (1\le m, r\le 100\, 000)(1≤m,r≤100000): the number of movies in the stack and the number of locate requests, and

one line with rr integers a_1, \ldots , a_ ra 
1
​
 ,…,a 
r
​
  (1 \le a_ i \le m1≤a 
i
​
 ≤m) representing the identification numbers of movies that Mr. K. I. wants to watch.

For simplicity, assume that the initial stack contains the movies with identification numbers 1, 2, \ldots , m1,2,…,m in increasing order, where the movie box with label 11 is the top-most box.

Output
Per test case:

one line with rr integers, where the ii-th integer gives the number of movie boxes above the box with label a_ ia 
i
​
 , immediately before this box is removed from the stack.

Note that after each locate request a_ ia 
i
​
 , the movie box with label a_ ia 
i
​
  is placed at the top of the stack.
