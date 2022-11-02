You are given a string SS of length NN, which consists of digits from 00 to 99. You can apply the following operation to the string:

Choose an integer LL with 1\le L \le N1≤L≤N and apply S_i = (S_i + 1) \mod 10S 
i
​
 =(S 
i
​
 +1)mod10 for each 1 \le i \le L1≤i≤L.
For example, if S=39590S=39590, then choosing L=3L=3 and applying the operation yields the string S=\underline{406}90S= 
406
​
 90.

The prefix of string SS of length l\;(1 \leq l \leq \mid S \mid )l(1≤l≤∣S∣) is string S_1 S_2 \dots S_lS 
1
​
 S 
2
​
 …S 
l
​
 . A prefix of length ll is called good if S_1=0, S_2=0, \dots, S_l=0S 
1
​
 =0,S 
2
​
 =0,…,S 
l
​
 =0. Find the length of the longest good prefix that can be obtained in string SS by applying the given operation maximum KK times.

Input Format
The first line of input contains an integer TT, denoting the number of test cases. The TT test cases then follow:
The first line of each test case contains two space-separated integers N, KN,K.
The second line of each test case contains the string SS.
Output Format
For each test case, output in a single line the length of the longest good prefix that can be obtained in string SS by applying the given operation maximum KK times.
