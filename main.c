#include <stdio.h>
int main(void){double p,r;int years;printf("Principal, annual rate (%%), years: ");if(scanf("%lf %lf %d",&p,&r,&years)!=3||p<0||r<0||years<0)return 1;double interest=p*r*years/100.0;printf("Interest: %.2f\nFinal balance: %.2f\n",interest,p+interest);return 0;}
