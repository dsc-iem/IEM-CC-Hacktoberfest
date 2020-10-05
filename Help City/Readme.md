##FACEBOOK HACKERCUP QUESTION
2020 has been a tough year for international players as they have to travel through different countries during the pandemic. To minimize the spread of COVID-19, each airline has decided to reorganize all of their flight routes in a linear fashion.

An airline's flights normally service N countries, running in various directions. Amidst the pandemic, each airline has carefully arranged these N countries in a sequence with each assigned a number from 1 to N .

Flights are limited to run only between pairs of countries that are adjacent in this sequence, with service in both directions. No other flights are available. That is, flights are available from country i to country j if and only if |i−j|=1 To make things more complicated, some countries have issued their own restrictions on incoming and outgoing travel. These restrictions are indicated by the characters I1..N and O1..N , each of which is either "N" or "Y": If Ii = "N", then incoming flights to country i from any other country are disallowed. Otherwise, if Ii = "Y", they may be allowed. If Oi = "N", then outgoing flights from country i to any other country are disallowed. Otherwise, if Oi = "Y", they may be allowed.

If a flight between adjacent countries is disallowed by the restrictions of neither its departure country nor its arrival country, then it's allowed.

As a consulting data scientist of Manchester City club , your job is to determine which trips between the various countries are possible as the club has to travel due to start of international football. Let Pi,j = "Y" if it's possible to travel from country i to country j via a sequence of 0 or more flights (which may pass through other countries along the way), and Pi,j = "N" otherwise. Note that Pi,i is always "Y". Output this N∗N matrix of characters.

Constraints

1. 1≤T≤100
2. 2≤N≤100
Input
Input begins with an integer T , the number of airlines. For each airline, there are three lines. The first line contains the integer N .The second line contains the length-N string I1..N.The third line contains the length N string O1..N.

​

Output
For each testcase output N lines, the ith of which contains the length-N string Pi,1..N ​

