#include <stdio.h>
#include <stdlib.h>

int hours,count, = 1, ot =0;

while (count <= 10)

    printf("\nEnter no of hours employees%d has worked\n, count");
    scanf("%d", &hours);


    if(hours <40)
{
    ot = ot + (hours -40);

}
        printf("Employees %d has worked %d hours\n"),
        printf("Overtime pay is Rs %d\n",(hours-40)*12);


}
   else
   {
       print("no of hours worked is %d, which is less than 40 hours,so no overtime");

       count++;
   }
   print("\nTotal Overtime pay is %d\n", (ot*12));

   return 0;
