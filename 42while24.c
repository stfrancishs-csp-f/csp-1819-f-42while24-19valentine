#include <stdio.h>
int main(void)
{
    int sum=0;
    int k = 0; //take increment from for command and insert here

    //for (k=0;k<5;k++)
    while(k<5) //put init condition in while command
    {
       // sum+=k; //use something different in "while" version
      printf("%d\n",k);
       sum = sum + k;
        k++; //Put end condition here
    }

    printf ("Sum - %d\n",sum);

    //k=5; <-no longer need this once in for loop

    //while (k>0) <--in condition
    for (k=10;k>=1;k--)
    {
      //  k=k-1; //use something different in "for" version
        printf ("%2d\n", k);

    }
    printf ("Blast Off!");

}




