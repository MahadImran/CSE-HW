#include <stdio.h>

int main() 
{    
    int M, N;
    int count = 0; //counte to check how many numbers are multiples

    printf("Enter an integer M: "); // takes values of M
    scanf("%d", &M);

    printf("Enter an integer N: "); // takes values of N
    scanf("%d", &N);

    if (M <= N) // if M is larger then there will be no multiples
    {
        
        for (int i = M; i <= N; i++) //starts with M because any value below M should not be accounted for
        {
            if (i % 11 == 0) //if remainder is 0 then value is multiple of 11
            {
                count++; //updates counter
            }
        }
    }

    printf("%d numbers between %d and %d are multiples of 11.\n", count, M, N); //print statement

    return 0;
}
