
#include <stdio.h>
 
 
int main (void)
{
    
    double stature, weight;
    scanf("%lf %lf" , &stature, &weight);
    
    double ratio,ref_weight;
    
    if(stature<150){ref_weight = stature -100;}
    else if(stature <160 ){ref_weight = (stature-150)/2 + 50;}
    else{ref_weight = (stature -100)*0.9;}
    
    ratio = (weight -ref_weight)*100/ref_weight;
    
    if(ratio<=10){printf("����");}
    else if(ratio<=20){printf("��ü��");}
    else{printf("��");}
    
    return 0;
}

