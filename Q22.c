//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float cp,sp;
    printf("enter costprice and sellingprice: ");
    scanf("%f%f",&cp,&sp);
    
    float profit,loss;
    if(sp>cp) {
        profit=(sp-cp)/cp*100;
        printf("PROFIT %.2f %%.\n",profit);
    }
    else if(cp>sp) {
        loss=(cp-sp)/cp*100;
        printf("LOSS %.2f %%.\n",loss);
    }
    else {
        printf("NEITHER PROFIT NOR LOSS.\n");
    }
    return 0;
}