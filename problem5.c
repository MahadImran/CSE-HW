
#include <stdio.h>

int main()
{
    int N = 0;

    while (N!= -1)
    {
	    int i;
	    int FoundFlag = 0;
    	printf("Enter an integer N or -1 to quit: "); //Takes value of N
    	scanf("%d", &N);
    	
    	if ((N ==0) || (N ==1)) //Checks if 0 or 1
    	{
    	    printf("%d is not a holy number in Numerion.", N);
    	}
    	
        for (i=1; i<=N; i++) //starts loop 
        {
            if (N==(i*i)+i)
            {
                printf("%d is a holy number in Numerion, because %d*%d+%d=%d\n", N,i,i,i,N);
                FoundFlag = 1;
            }
            else
            {
                FoundFlag = 0;
            }
            
            if (FoundFlag ==1)
            {
                i = N;
            }
            
        }
        if ((FoundFlag ==0) && (N!= -1))
        {
            printf("%d is not a holy number in Numerion.\n", N);
        }
    }
}
