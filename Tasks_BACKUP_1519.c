#include<stdio.h>

int main()
{
    int number,choice,a,i,table,composite=0;
    printf("Enter number:\n");
    scanf("%d",&number);
    printf("Enter choice:\n\t1 to check even/odd\n\t2 to check prime\n\t3 to print all numbers till n\n\t4 to print table\n\t5 to print all even and odd numbers separatly\n\t6 to print sum of all numbers till n\n\t7 to print all prime numbers till n\n\t8 to print fibonacci/tribonacci series till n separtely\n\t9 to print all composite no. till n\n\n>>");
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
            break;
        case 6:
            printf("Sum of all natural number till %d is:\n",number);
            for(i=1;i<=number;i++)
            {
                sum=sum+i;
            }
            printf("%d",sum);
            break;
        case 7:
            printf("Prime Numbers till %d");
            for(int i=3;i<=number;i++){
		        int flag=0;
		        for(int j=2;j<i;j++){
			        if(i%j == 0){
				    flag = 1;
				    break;
			    }
		    }  
            if(flag==0){
                printf("%d ",i);}
            }
            break;
        case 8:
            break;
        case 9:
<<<<<<< HEAD
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
=======
            printf("Composite Numbers: ");
            for(int i = 2;i <= number;i++){
                composite = 0;
                for(int j = i-1; j > 1 ; j--){
                    if(i%j == 0){}
                    composite = 1;
>>>>>>> e4f1f77a8ff0cb0111fd97569fbc66ff4ea9e667
                }
                if(composite == 1)
                    printf("%d ", i);
                }
            break;
        default:
            printf("Invalid choice");
    }
	return 0;
}
<<<<<<< HEAD
            
            
                
            
=======
>>>>>>> e4f1f77a8ff0cb0111fd97569fbc66ff4ea9e667
