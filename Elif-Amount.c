#include <stdio.h>
int main(){
   //**
    const float discount = 0.05; 
    float itms, net_amt;  

    printf("Enter the amount of the item: ");
    scanf("%f", &itms);

    
    if(itms > 2000)
    {
            net_amt = itms - (itms * discount);
            printf("The final amount is: \t %.2f ", net_amt);
    }

    else
    {
             printf("The final amount is: \t %.2f", itms);
    }

    return 0;
}