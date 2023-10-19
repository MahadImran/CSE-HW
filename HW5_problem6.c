
#include <stdio.h>

int main() 
{    
    int low,high,count
    count = 0;
    printf("Enter low: ");
    scanf("%d", &low);
    printf("Enter high: ");
    scanf("%d", &high);
    if (low>high)
    {
        printf("no numbers found");
        return 0;
    }
    for(int i = low; i <= high; i++ )
    {
        if(i%4 !=0)
        {
            printf("%d\n", i);
            count++;
        }
        
    }
    if (count ==0)
    {
        printf("no numbers found");
    }
    return 0;
}
