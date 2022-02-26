
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PDT means product
    int  InitialPDTinStore,FinalPDTinStore,quantitySold;
    char PDTsold[100];
    float price,change,amountPaid,Total;

    char name[100];
// Calculations



//inputs


    printf("JOEL'S ELECTRONIC COMPANY\n");
    printf("Name of product sold\n");
    scanf("%s",PDTsold);
    printf("Initial product in store\n");
    scanf("%d", &InitialPDTinStore);
    printf("Quantity sold\n");
    scanf("%d", &quantitySold);
    printf("price of the item\n");
    scanf("%f", &price);
    printf("Amount Paid\n");
    scanf("%f", &amountPaid);
    //
     FinalPDTinStore = InitialPDTinStore - quantitySold;
       Total =  price * quantitySold;
    change =  amountPaid - Total;

    printf("FinalPDTinStore is %d\n",FinalPDTinStore);
    printf("Total Amount is %f\n",Total);
    printf("Your change is  %f\n", change);
    printf("\n WELLCOME TO JOEL'S ELECTRONIC COMPANY");

    return 0;






}
