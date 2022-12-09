#include<stdio.h>
#include<string.h>

//functions
void menu();
void question();
void invoice();
void line();

//variables
int a,z;
int list[7]={0,1280,2000,480,830,50,360};  //menu prices
int userReply[5];  //to get user's answere
int inputIndex , inputQuantity ;  //to get inpuputs for index & quantity
int tempTotal ;int amount[6];  //to store temp. total
int index[6];  // to store index Numbers
int quantity[6];  // to store user req. quantity

int main(){
printf("\n*****************************************************\n");
printf("************WELLCOME TO GROCERY STORE****************\n");
printf("*****************************************************\n\n");
menu();
printf("Do you want to buy something ?\n( yes / no )\n");
scanf("%s",userReply);
if (strcmp(userReply,"yes") ==0){
    do{
        int i=0;
        question();
        amount[i]=tempTotal;index[i]=inputIndex;quantity[i]=inputQuantity;
        z++;
        i++;
        if (strcmp(userReply,"yes") ==0){
            a=1;
        }else{
            a=0;
        }
        
    }while(a==1);
    invoice();
}else {
    printf("you choosed to exit this prohran ...\n");
}
return 0;
}

void menu(){
    printf("-----------------------------------------------------------------------------------\n");
    printf(" | Index No |  \t  Item Name  \t\t\t\t      |   Item Price   |\n");
    printf("-----------------------------------------------------------------------------------\n");
    printf("\t1\tPremium Keeri Samba Rice ( 5kg[bag] )\t\tLKR : 1,280\n \t2\tSri Lankan Basmathi ( 4kg[bag] )\t\tLKR : 2,000\n \t3\tPasta Penne Rigate ( 500g )\t\t\tLKR : 480\n \t4\tClassic Instant Coffee ( 50g )\t\t\tLKR : 830\n \t5\tEggs\t\t\t\t\t\tLKR : 50\n \t6\tFesh Milk\t\t\t\t\tLKR : 360\n\n");
}
void question(){
    printf("Enter an Index Number : \n");
    scanf("%d",&inputIndex);
    printf("\nEnter the quantity you want : \n");
    scanf("%d",&inputQuantity);
    tempTotal=list[inputIndex]*inputQuantity;
    printf("Temp. Total is : LKR : %d",tempTotal);
    printf("\nDo you want to buy another item ?\n( yes / no )\n");
    scanf("%s",userReply);
}
void invoice(){
    line();
    printf("-------------------GROCERY-----------------------\n");
    line();
    printf (" | Index No | \tQty \t|\t Amount \t|\n");
    int x=0;
    for (int i=0;i<z;i++){
         printf("\t%d",index[i]);
         printf("\t%d",quantity[i]);
         printf("\t\tLKR : %d\n",amount[i]);
        x=x+amount[i];
    }
    line();
    printf("Total Amount is \t:: LKR : %d\n",x);
    line();
    printf("\n    ... Thank you ;! come again ...\n");
}
void line(){
    for (int i=0;i<=1;i++){
        for (int i=1;i<=50;i++){
            printf("-");
        }
        printf("\n");
    }
}
