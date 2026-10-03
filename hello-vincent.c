#include <stdio.h>

//function prototype
float calculateTax(float gross_amnt);

int main(){
    
    float amount,result,final_amnt;
    
    printf("Enter the employee's gross salary:\t");
    scanf("%f",& amount);
    
    //function call
    result=calculateTax(amount);
    final_amnt=amount-result;
    
    printf("\n");
    printf("NEX NET SALARY PROGRAM\n");
    printf("==============\n");
    printf("Initial Amount:Ksh.%.2f\n",amount);
    printf("Tax Offered:Ksh.%.2f\n",result);
    printf("Final NetSalary Payable:Ksh.%.2f\n",final_amnt);
    printf("===============");
    return 0;
}

//function definition
float calculateTax(float gross_amnt){
    float tax;
    if(gross_amnt<30000){
        tax=0.05 *gross_amnt;
    }
        
        else if(gross_amnt >=5000 && gross_amnt <=59999){
            tax=0.10 *gross_amnt;
        }
            
            else if(gross_amnt >=60000){
                tax=0.15 *gross_amnt;
            }
            return tax;
        }

    
