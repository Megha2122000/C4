#include<stdio.h>
main()
{
	//1.Display the menu
	printf("Pick an item: \n 1. Pizza  \n 2. Burger \n 3. Pasta  \n 4. French Fries  \n 5. Sandwich ");
	//2.Read their choice 
	int choice=0;
	printf("\n\nEnter your choice :- \n");
	scanf("%d" , &choice);
	//3.Display based on their conditions
	switch(choice)
	{
		case 1:
			printf("Pizza = Rs 239");
		break;
		case 2:
			printf("Burger = Rs 129");
		break;
		case 3:
				printf(" Pasta = Rs 179");
		break;
		case 4:
				printf("French Fries = Rs 99");
		break;
		case 5:
				printf("Sandwich = Rs 149");
		break;
		default : printf("Invalid choice");
	}
}
