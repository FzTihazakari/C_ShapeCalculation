#include<stdio.h>
#include<conio.h>
void main()
{
	
		
	char shape;
	
	printf ("What shape that you want as a swimming pool? It's either L shape or T shape. (L/T) \n ");
	scanf ("%c", &shape);
	
	if (shape == 'L'){
		 int i,j,k;
    
    for(i=0;i<=15;i++)
    {
        for(j=0;j<3;j++)
        {
           printf(" ** ");
        }
        for(k=1;k<=6;k++)
        {
            if(i>9 && i<=15)
            {
                printf(" *** ");
            }
        else
        {
            printf("  "); 
        }
        }
            printf("\n");
	}
}
	else if (shape == 'T'){
		int i,j;
    
       system("color 0a");
       
        for(i=0;i<=11;i++)
            {
        for(j=0;j<=6;j++)
               {
            if(i>=0&&i<2||i>=2&&i<=11&&j==3)
            {
                    printf("***");
                   }
            else
            {
                    printf("   ");
                   }
               }  
                    printf("\n");
           }
	}
	
	else if (shape != 'T' && shape != 'L'){
		printf ("Shape enter is invalid. ");
	}
		
	{
		printf ("\nWhat do you think about this shape? Here i attach the costing to build this swimming pool.\n");
    {
	
    int lengthA, widthA, heightA, lengthB, widthB, heightB, SizePoolA, SizePoolB, SizePool, costbefore;
	float TotalPrice; 
    
    printf ("Enter length A of the pool >> ");
    scanf ("%d", &lengthA);
    
    printf ("Enter width A of the pool >> ");
    scanf ("%d", &widthA);
    
    printf ("Enter height A of the pool >> ");
    scanf ("%d", &heightA);
    
    printf ("Enter length B of the pool >> ");
    scanf ("%d", &lengthB);
    
    printf ("Enter width B of the pool >> ");
    scanf ("%d", &widthB);
    
    printf ("Enter height B of the pool >> ");
    scanf ("%d", &heightB);
    
    SizePoolA = lengthA * widthA * heightA;
    printf ("The size of this swimming pool A is %d sqft \n", SizePoolA);
    
    SizePoolB = lengthB * widthB * heightB;
    printf ("The size of this swimming pool B is %d sqft \n ", SizePoolB);
    
    SizePool = SizePoolA + SizePoolB; 
    printf ("The total size of this pool is %d sqft \n", SizePool);
    
    costbefore = 20 * SizePool;
    printf ("The cost of swimming pool before discount is RM%d\n", costbefore);
    
    if (costbefore <= 900){
    printf ("No discout. Type of pool is small\n");
    }
    else if (costbefore > 9001 && costbefore <= 50000){
    TotalPrice = costbefore * 0.08;
    printf ("Type of swimming pool is medium. Discount is 2 percent. Total price is RM%.2f\n", TotalPrice );
    }
    else {
    TotalPrice = costbefore * 0.965;
    printf ("Type of swimming pool is large. Discount is 3.5 percent. \nTotal price is RM%.2f\n", TotalPrice);
    }
    }
	}
	
	{
		{
    int radius; 
    float pi = 3.142, area, costbeforeO, TotalPriceO;
    
	{
	
	printf("Puan Ajwah what do you think? \n");
	printf("Puan Ajwah, this is our third suggestions design. O shape. What do you think?\n\n\n");


{

printf("\n                **************                                                               ");
printf("\n            **********************                                                           ");
printf("\n         ****************************                                                        ");
printf("\n      ***********            ***********                                                     ");
printf("\n     ********                    ********                                                    ");
printf("\n   ********                        ********                                                  ");
printf("\n  *******                            *******                                                 ");
printf("\n *******                              *******                                                ");
printf("\n ******                                ******                                                ");
printf("\n******                                  ******                                               ");
printf("\n******                                  ******                                               ");
printf("\n******                                  ******                                               ");
printf("\n******                                  ******                                               ");
printf("\n******                                  ******                                               ");
printf("\n ******                                ******                                                ");
printf("\n *******                              *******                                                ");
printf("\n  *******                            *******                                                 ");
printf("\n   ********                        ********                                                  ");
printf("\n     ********                    ********                                                    ");
printf("\n      ***********            ***********                                                     ");
printf("\n         ****************************                                                        ");
printf("\n            **********************                                                           ");
printf("\n                **************                                                               ");
}
{
	printf("\n\nEnter radius of circle >> ");
	scanf ("%d", &radius);
	
    area = pi * radius * radius;
	printf ("The area of this O shape swimming pool is %.2f sqft\n", area);
	
	costbeforeO = 20 * area;
    printf ("The cost of swimming pool before discount is RM%.2f\n", costbeforeO);
    
    if (costbeforeO <= 900){
    printf ("No discout. Type of pool >> small\n");
    }
    else if (costbeforeO > 9001 && costbeforeO <= 50000){
    TotalPriceO = costbeforeO * 0.08;
    printf ("Type of swimming pool is medium. Discount is 2 percent. Total price is RM%.2f\n", TotalPriceO );
    }
    else {
    TotalPriceO = costbeforeO * 0.965;
    printf ("Type of swimming pool large. Discount is 3.5 percent. \nTotal price is RM%.2f\n", TotalPriceO);
    }
}

}
}
   
 
}
	
}	


