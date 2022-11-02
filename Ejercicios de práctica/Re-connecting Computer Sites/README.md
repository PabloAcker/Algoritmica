Consider the problem of selecting a set T of high-speed lines for connecting N computer sites, from a
universe of M high-speed lines each connecting a pair of computer sites. Each high-speed line has a
given monthly cost, and the objective is to minimize the total cost of connecting the N computer sites,
where the total cost is the sum of the cost of each line included in set T. Consider further that this
problem has been solved earlier for the set of N computer sites and M high-speed lines, but that a few
K new high-speed lines have recently become available.
Your objective is to compute the new set T
′
that may yield a cost lower than the original set T,
due to the additional K new high-speed lines and when M + K high-speed lines are available.
Input
The input will contain several test cases, each of them as described below. Consecutive
test cases are separated by a single blank line.
The input is organized as follows:
• A line containing the number N of computer sites, with 1 ≤ N ≤ 1000000, and where each
computer site is referred by a number i, 1 ≤ i ≤ N.
• The set T of previously chosen high-speed lines, consisting of N − 1 lines, each describing a
high-speed line, and containing the numbers of the two computer sites the line connects and the
monthly cost of using this line. All costs are integers.
• A line containing the number K of new additional lines, 1 ≤ K ≤ 10.
• K lines, each describing a new high-speed line, and containing the numbers of the two computer
sites the line connects and the monthly cost of using this line. All costs are integers.
• A line containing the number M of originally available high-speed lines, with N − 1 ≤ M ≤
N(N − 1)/2.
• M lines, each describing one of the originally available high-speed lines, and containing the numbers of the two computer sites the line connects and the monthly cost of using this line. All costs
are integers.
Output
For each test case, the output must follow the description below. The outputs of two
consecutive cases will be separated by a blank line.
The output file must have one line containing the original cost of connecting the N computer sites
with M high-speed lines and another line containing the new cost of connecting the N computer sites
with M + K high-speed lines. If the new cost equals the original cost, the same value is written twice.
