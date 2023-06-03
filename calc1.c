#include<stdio.h>
calc()
{
    int n,a,b;
    do{
        printf("\nEnter your choice:-");
        scanf("%d",&n);
        if(n==6)
	    {
	        printf("Exit......");	
	    } 
	    else if(n>6)
	    {
		    printf("Plz enter propar value.");
	    }
    	else if(n>0 && n<=6)
	    {
	        switch(n)
		    {
			
			    case 1 :
				    printf("Enter value A=");
				    scanf("%d",&a);
				    printf("Enter value B=");
				    scanf("%d",&b);
				    printf("Addition of A+B=%d\n",a+b);
				    break;
			    case 2 :
				    printf("Enter value A=");
				    scanf("%d",&a);
				    printf("Enter value B=");
				    scanf("%d",&b);
				    printf("Substraction of A-B=%d\n",a-b);
				    break;
			    case 3 :
				    printf("Enter value A=");
				    scanf("%d",&a);
				    printf("Enter value B=");
				    scanf("%d",&b);
				    printf("Multiplication of A*B=%d\n",a*b);
				    break;
			    case 4 :
				    printf("Enter value A=");
				    scanf("%d",&a);
				    printf("Enter value B=");
				    scanf("%d",&b);
				    printf("Division of A/B=%d\n",a/b);
				    break;
			    case 5 :
				    printf("Enter value A=");
				    scanf("%d",&a);
				    printf("Enter value B=");
				    scanf("%d",&b);
				    printf("Moduls of A%B=%d\n",a%b);
				    break;
			    default :
				    printf("Plz enter proper choice!");
		  }
	   }
    }while(n!=6);
}
main()
{
	printf("Press 1 for Addition.\n");
	printf("Press 2 for Substraction.\n");
	printf("Press 3 for Multiplication.\n");
	printf("Press 4 for Division.\n");
	printf("Press 5 for Moduls.\n");
	printf("Press 6 for Exit.\n");
	calc();
}
