#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,flag=1;
    printf("Enter the number:\n");

    //store input num in a variable
    scanf("%d",&n);
    //iterate from 2 to sqrt(n)
    for(i=2;i<=sqrt(n);i++){
        if(n/i==0){
            flag=0;
            break;
        }
    }
    if(n<=1)
    flag=0;
    if(flag==1)
    {
        printf("%d is a Prime number",n);
    }
    else{
        printf("%d is not a Prime number",n);
    }
    return 0;
    }