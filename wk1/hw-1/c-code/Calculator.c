#include <stdio.h>    
int main()
{ 
    int numOp;
    double num1, num2, ans;
    char operator;
    int counter = 0; 
    // Displays the string inside quotations
    printf("How many operators do you want to do? ");
    scanf("%d", &numOp); 
    printf("Number of Operators = %d",numOp);
    for(int i = 0; i< numOp; i++){
        printf("\nWhat operation do you want to do? ");
        scanf("%c", &operator);
        scanf("%c", &operator);
        if( operator == '*'){
            int t;
            printf("\nDo you want to do\n1. * ( Multiply)\nor\n2. ** (To the Power Of) \nType either 1 or 2");
            scanf("%d", &t);
            if( t == 2){
                operator = '^';
            }
        }
        printf("\n The operator = %c", operator );
        
        if( i == 0 ){
            printf("\n\nWhat is the first number? ");
            scanf("%lf", &num1);
            printf("\nFirst Number = %lf", num1 );
            printf("\n\nWhat is the second number? ");
            scanf("%lf", &num2);
            printf("\nSecond Number = %lf", num2 );
        
        }else{
            printf("\n\nWhat is the next number? ");
            scanf("%lf", &num2);
            printf("\nNext Number = %lf", num2 );
        }
        switch (operator){
            case '+':
                ans = num1 + num2;
                printf("The sum is %lf", ans);
                break;
            case '-':
                ans = num1 - num2;
                printf("\nThe difference is %lf", ans);
                break;
            case '*':
                ans = num1 * num2;
                printf("\nThe product is %lf", ans);
                break;
            case '/':
                ans = num1/num2;
                printf("\nThe difference is %lf", ans);
                break;
            case '^':
                ans = num1;
                for( int i = 1; i< num2; i++){
                    ans *= num1;
                }
                printf("\nThe result is %lf", ans);
                break;
            default: 
                printf("\nInvalid Operator Please Try Again");
                i--;
                break;
        
        }
        num1 = ans;
    }

    
   
    

    return 0;
}