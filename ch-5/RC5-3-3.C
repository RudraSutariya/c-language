#include<stdio.h>
#include<conio.h>
main()
{
	int choice;
	clrscr();
	printf("press 1 for English\n");
	printf("press 2 for Hindi\n");
	printf("press 3 for Gujarati\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	printf("====================================================\n");
	switch (choice)
	{
		case 1:
			printf("press 1 for internet Rechargen\n");
			printf("press 2 for Top up Recharge\n");
			printf("press 3 for Special Recharge\n");
			printf("Enter your choice:");
			scanf("%d",&choice);
			printf("====================================================\n");
			switch (choice)
			{
				case 1:
					printf("you have successfully done internet recharge");
					break;
				case 2:
					printf("you have successfully done top-up recharge");
					break;
				case 3:
					printf("you have successfully done special recharge");
					break;
			}
		break;
		case 2:
			printf("internet Rechargen ke liya 1 dabaiya\n");
			printf("Top up Recharge ke liya 2 dabaiya\n");
			printf("Special Recharge ke liya 3 dabaiya\n");
			printf("Enter your choice:");
			scanf("%d",&choice);
			printf("====================================================\n");
			switch (choice)
			{
				case 1:
					printf("Aapna safaltapurvak internet recharge kar liya he");
					break;
				case 2:
					printf("Aapna safaltapurvak top-up recharge kar liya he");
					break;
				case 3:
					printf("Aapna safaltapurvak special recharge kar liya he");
					break;
			}
		break;
		case 3:
			printf("internet Recharge mata 1 dabavo\n");
			printf("Top up Recharge mata 2 dabavo\n");
			printf("Special Recharge mata 3 dabavo\n");
			printf("Enter your choice:");
			scanf("%d",&choice);
			printf("====================================================\n");
			switch (choice)
			{
				case 1:
					printf("tame safaltapurvak internet recharge karyu  che");
					break;
				case 2:
					printf("tame safaltapurvak top-up recharge karyu che");
					break;
				case 3:
					printf("tame safaltapurvak special recharge karyu che");
					break;
			}
		break;


	}
	 getch();
}

