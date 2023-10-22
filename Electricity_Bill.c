#include<stdio.h>
int main () {
    int u;
    float b,sc,t;
    scanf("%d",&u);
    if(u<=199) {
        b=u*1.20;
    } else if (u>=200 && u<400) {
        b=u*1.40;
    } else if (u>=400 && u<600) {
        b=u*1.60;
    } else if(u>=600 && u<800) {
        b=u*1.80;
    } else {
        b=u*2.00;
    } 
  if(b>400) {
      sc=(b*15)/100;
  } else {
      sc=0.00;
  } 
 t=b+sc; 
 printf("Units Consumed: %d
",u);
 printf("Cost per Unit: %.2f
",b/u);
 printf("Bill: %.2f
",b);
 printf("Surcharge: %.2f
",sc);
 printf("Total Amount: %.2f",t);
 }