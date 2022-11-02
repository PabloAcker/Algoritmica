Jóhann, Marteinn and Símon have decided to make the next generation of supercomputers! They know that it probably won’t be long before Quantum computers take over, but since they don’t know anything about Quantum mechanics, they want to rush these new supercomputers out into the market, make their money, and hopefully retire with their wealth.

Since they’re trying to sell these things, they decide they need some cool features to promote the computers. Marteinn suggests painting flames on the back of the computers to make it look like they’re computing faster. Jóhann agrees, but suggests also adding a second keyboard so people can type faster, just like in that TV show: NCIS. Símon also agrees, but he thinks there’s something missing. What are they forgetting? Ah, of course, faster memory!

They decide to add an NN-bit memory that supports the following two operations:

given an integer kk, flip the kk:th bit of the memory (changing a 00 to a 11, and a 11 to a 00), and

given integers ll and rr, count how many bits between the ll:th bit and the rr:th bit are set to 11.

After announcing their new supercomputer with these three awesome features, they immediately received a large amount of orders. Of course everyone wants a supercomputer with flames painted on the back! But now it’s time to actually implement these features. While Jóhann, Marteinn and Símon are busy painting the computers and supplying more keyboards, they’ve hired you to implement their memory.

Input
The input consists of:

one line containing two integers NN (1 \leq N \leq 10^61≤N≤10 
6
 ), the number of bits in the memory, and KK (1 \leq K \leq 10^51≤K≤10 
5
 ), the number of queries;

KK lines each of the form:

F ii (1 \leq i \leq N1≤i≤N) representing a query to flip the ii:th bit in memory;

C ll rr (1 \leq l \leq r \leq N1≤l≤r≤N) representing a query to count the number of 11 bits in the range from ll to rr, inclusive.

All NN bits in the memory are initially set to 00.

Output
For each query of the second type, output a single line containing the number of bits set to 11 in the given range.
