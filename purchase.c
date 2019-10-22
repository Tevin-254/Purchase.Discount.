#include <stdio.h>
int main()
       {
           float amount;
           float dis1,dis2,dis3,dis4;
           printf("Enter the enter amount\n");
           scanf("%f", &amount);
           if(amount==10000)
           {     dis1=amount*0.1;
               printf("give a %f discount",dis1);
           }
           else if((amount>=5000) &&(amount<=10000))
           {   dis2=amount*0.05;
               printf("give a %f discount",dis2);
           }
           else if((amount>=3000) &&(amount<=5000))
           {   dis3=amount*0.03;
               printf("give a %f discount",dis3);
           }
           else if((amount>=0) &&(amount<=3000))
           {   dis4=amount*0.0;
              if(dis4==0){
            printf("your discount is %f",dis4);
            printf("pay full amount");
           }
           }
           else printf("enter amount range between 0 to 10000");
           return 0;

       }
