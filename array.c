#include<stdio.h>
#include<time.h>
int main()
{
    int i,j;
    int res[10][3];
    int min,max;
    int tol=0;
    min=max=0;
    srand(time(0));
    // random number 
    for(i=0;i<10;i++)
    {
        for(j=0;j<3;j++)
        {
            res[i][j]=rand() % 101;
        }
    }
    
    //------------------------------------------
    printf("\nS.no   Subject-1  Subject-2   Subject-3   Max   Min");
    for(i=0;i<10;i++)
    {   
            min=res[i][0];
            max=res[i][0];
        printf("\n");
    
        printf("%d",i+1);
    //----------------------------------   
        for(j=0;j<3;j++)
        {
            printf("%13d",res[i][j]);
             
            
            if(min>res[i][j]) min=res[i][j];
            if(max<res[i][j]) max=res[i][j];
            
        }
        printf("%8d%8d",min,max);
    
        
    }

}