#include<stdio.h>
#include<math.h>
#include<stdlib.h>
// #include<conio.h>

void number_selection();
double addition();
double subtraction();
double multiplication();
double division();
double power_of_two_function();

char op;
int n;
double x, y;
double num1,num2;
double sum =0,value,ans;
int main(){   
		
	    char nextTime = 'y';
	    do{
            a:
            system("clear");
            printf("\t\tSimple CALCULATOR\n");
            printf("---------------------------------------------------------");
            printf("\n\t\tAddition       : '+'\n\t\tSubtraction    : '-'\n\t\tMultiplication : '*'\n\t\tDivision       : '/'\n\t\tpower          : 'p'\n");
            printf("---------------------------------------------------------");

	        printf("\n\n\tSelect the operation to be done: ");
	        scanf("%s", &op);
            printf("\n\n");
	       
	        if(op == '+' || op == '-' || op=='*' || op=='/' || op == 'p'){
		        switch(op){
		        	case '+':
			       		number_selection();
			       		addition();
						printf("Answer: %.3lf", ans);
				   		break;
					case '-':
				   		number_selection();
				   		subtraction();
				   		printf("Answer: %.3lf", ans);
				   		break;
				    case '*':
				    	number_selection();
				    	multiplication();
				    	printf("Answer: %.3lf", ans);
						break;
				    case '/':
				    	number_selection();
				    	division();
				    	printf("Answer: %.3lf", ans);
				    	break;
				    case 'p':
				    	number_selection();
				    	power_of_two_function();
				 	    printf("Answer: %.3lf", ans);
						break;   	
				}
	        }else{
	        	system("cls");
	            printf("\t\t***********INVALID OPERATION SELECTION***********\n\n\t\t########## PLEASE SELECT AMONG ABOVE MENTIONED ##########\n");
	            goto a;
	        }
	
	    printf("\nDo You Want To Continue[y/n] : ");
	    scanf(" %c", &nextTime);
	
	    }while(nextTime == 'Y' || nextTime == 'y');

    system("exit");

    return 0;
}

void number_selection(){
	if (op == '+'){
		printf("How many numbers you want to add: ");
		scanf("%d", &n);
		if (n>1){
			printf("Enter %d numbers: ",n);
		}
	}
	else if (op == '-'){
		printf("Enter two numbers for subtraction: ");
		scanf("%lf%lf", &num1, &num2);
	}
	else if(op == '*'){
		printf("Enter two numbers for multiplication: ");
		scanf("%lf%lf", &num1, &num2);		
	}
	else if(op == '/'){
		printf("Enter two numbers for division: ");
		scanf("%lf%lf", &num1, &num2);	
	}
	else{
		printf("\n\tFormate for power calculation\n\tx^y\n\n");
		printf("Enter value of x: ");
		scanf("%lf", &x);
		printf("Enter value for y: ");
		scanf("%lf", &y);
	}
}

double addition(){
	int i;
	for (i = 1; i<=n; i++){
		scanf("%lf", &value);
		sum = sum + value;
	}
	ans = sum;
	return ans;
}

double subtraction(){
	ans = num1 - num2;
	return ans;
}
double multiplication(){
	ans = num1 * num2;
	return ans;
}
double division(){
	ans = num1/num2;
	return ans;
}

double power_of_two_function(){
    ans = pow(x,y);
    return ans;
}