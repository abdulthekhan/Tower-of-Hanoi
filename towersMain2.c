#include <stdlib.h>
#include "towers.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    int n, from, dest;

    /*Every if statement checks to see what the values entered by the user are and prints out the appropriate error statement
    for each case. For example, if argc==2, then the user might have entered "towers 3" and takes in those values as parameters 
    for the recursive function. If somehow, the user enters "towers 0" or "towers -1", then an error message would pop up saying 
    that there cannot be zero or negative disks. These error statements are done for each case.*/
    if(argc == 1)
    {
    	n = 3;
	from = 1;
	dest = 2;
    }

    if(argc == 2)
    {
    	n = atoi (argv[1]);
	from = 1;
	dest = 2;

	if (n <= 0)
	{
		fprintf (stderr, "There cannot be 0 or negative disks.");
		exit (1);
	}
    }

    if(argc == 4)
	{    
	n = atoi (argv[1]);
	from = atoi (argv[2]);
	dest = atoi (argv[3]);
	
	if (n <= 0 || from <= 0 || dest <= 0)
	{
		fprintf (stderr, "There cannot be negative disks or negative values for From and Dest. They have to be greater than 0.");
		exit (1);
	}

	else if (from == dest)
	{
		fprintf (stderr, "Incorrect Arguments, The From and the Dest values are the same.");
		exit (1);
	}
	
	else if (from > 3 || dest > 3)
	{
		fprintf (stderr, "There is only 3 towers. You must enter between 1 and 3 for both From and Dest");
		exit (1);
	}	
    }

    if (argc > 4 || argc == 3)
    {
    	fprintf (stderr, "Incorrect Arguments, Must be either 'towers' or 'towers(x,y,z)");
	exit (1);
    }

    towers(n, from, dest);
    exit(0);
}

