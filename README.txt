
******NOTES*******
Make sure the command towers(x,yz) is run on terminal. Also, towersMain2.c is the updated code for the project (where all of the modifications have been done). 
As for the lab itself, for every single error that is expected to be caught was successfully caught for each one. Also, correct invocation is now detected. 

Questions:

Suppose that towers(5, 2, 3) is invoked.

1.      How will the first recursive call to towers() be invoked? Answer this question in the form: towers(x, y, z) where you give the actual values to the three parameters.

2.      How many recursive calls to towers() will be made before this first recursive call actually returns to the initial invocation?

3.      Once towers(5, 2, 3) has invoked its first recursive call to towers() and this invocation has returned, what will be printed to stdout? (i.e. What actual move will be made by towers(5, 2, 3) ?)

4.      How will the second recursive call to towers() be invoked? Answer this question in the form: towers(x, y, z) where you give the actual values to the three parameters.

5.      Suppose that towers(8, 1, 2) is invoked. How many lines will be printed to stdout?

Answers: 

1. Initially n=6 so when the first recursive call to towers() is invoked, n=5 because the value becomes "n-1". The value for "from" variable is 2 so that remains the same since 
   the blocks are moving from tower 2 to tower 3 and therefore tower 1 becomes a spare. In conclusion, the first recursive call to towers () will be towers(4,2,1).

2. 6 recursive calls will be made to towers() from towers(5,2,3).

3. Once towers(5,2,3) was invoked, the standard output file was redirected to a stdout file. Stdout is as shown below.

2 3
2 1
3 1
2 3
1 2
1 3
2 3
2 1
3 1
3 2
1 2
3 1
2 3
2 1
3 1
2 3
1 2
1 3
2 3
1 2
3 1
3 2
1 2
1 3
2 3
2 1
3 1
2 3
1 2
1 3
2 3

4. towers (3,2,3) will be the second recursive call to be invoked. 

5. The minimum number of moves to solve a tower of hanoi puzze is 2^(n)-1, therefore 2^(8)-1 = 255, thus it will take 255 moves and so 255 lines will be printed
   out to stdout.

**BUGS**
The program does not yet behave as specified. The command line args to identify the two towers are not recognized. Furthermore, incorrect invocation is not detected.

**CHANGE LOG**
All bugs have been fixed as of the date listed above. No new bugs have appeared as of yet. 