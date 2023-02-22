#include<stdio.h>
int main()
{
    int number,choice,i,j,table,sum=0,k=65;
    char a;
    printf("Enter number:\n");
    scanf("%d",&number);
    printf("Enter choice:\n\t1 to check even/odd\n\t2 to check prime\n\t3 to print all numbers till n\n\t4 to print table\n\t5 to print all even and odd numbers separatly\n\t6 to print sum of all numbers till n\n\t7 to print all prime numbers till n\n\t8 to print fibonacci/tribonacci series till n separtely\n\t9 to print all composite no. till n\n\t10 to print character patterns\n\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
        printf("The table of %d is:\n",number);
            for(i=1;i<=10;i++)
            {
                table=number*i;
                printf("%d * %d = %d\n",number,i,table);
            }
            break;
        case 5:
            printf("Even numbers till %d are:\n",number);
            for(i=1;i<=number;i++)
            {
                if(i%2==0)
                {
                    printf("%d\n",i);
                }
                else{
                    printf("");
                }
            }
            printf("Odd numbers till %d are:\n",number);
            for(i=1;i<=number;i++)
            {
                if(i%2!=0)
                {
                    printf("%d\n",i);
                }
                else{
                    printf("");
                }
            }
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            
            printf("Enter choice of pattern\na\tb\tc\td\n");
            scanf("%s",&a);
            printf("Pattern is:\n");
            if(a=='a'){
                for(i=1;i<=number;i++)
                {
                    for(j=1;j<=i;j++)
                    {
                        printf("%c ",k);
                        k++;
                    }
                    printf("\n");
                }
            }
            else if(a='b')
                {
                    for(i=1;i<=number;i++)
                    {
                        for(j=1;j<=i;j++)
                        {
                            printf("%c ",j+64);
                        }
                        printf("\n");
                    }
                }
                
            
            break;
        default:
            printf("Invalid choice");
        return 0;
    }
}
            