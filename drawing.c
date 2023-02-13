#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#define NUMBER 100
int main()
{
	int value, i, drawing;
	int arr[NUMBER];
	srand(time(NULL));
	for (i = 1;i <= NUMBER;i++)
		arr[i-1] =i;
	printf("Are you ready for a drawing? \n");
	printf("Enter 1 to begin,or 0 to quit:");
	while (scanf("%d", &value) == 1)
		if (value == 0)
		{
			printf("Good luck for you!\n");
			exit(EXIT_FAILURE);
		}
			
		else if (value > 1)
		{
			printf("Enter 0 or 1, please:");
			continue;
		}

		else
		{
			while (drawing = rand() % NUMBER )
			{
				if (arr[drawing] != 0)
				{
					printf("The system is performing the drawing.\n");
					printf("Please wait for seconds.\n");
					Sleep(3000);
					system("cls");
                  printf("The number you have drawed is:%d\n", arr[drawing]);
		          arr[drawing] = 0;
				  break;
			    }
		      
			}
		    printf("Let's have another try!\n");
			printf(" Enter 1 to begin,or 0 to quit:");
		}
	
	return 0;
}
