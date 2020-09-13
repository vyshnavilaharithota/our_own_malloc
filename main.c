#include <stdio.h>
#include <stdint.h>
#include<stdlib.h>
#include "mem.h"

int* integer;
float *floating;
char *character;


void allocateMemory()
{
	int ch;
	printf("1-int\n2-float\n3-character");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: integer=(int *)Mem_Alloc(sizeof(int));
			*integer=61;
			printf("Integer address is %u\n",integer);
			break;
		case 3: character= (char *)Mem_Alloc(sizeof(char));
			*character="L";
			printf("Character address is %u\n",character);
			break;
		case 2: floating= (float *)Mem_Alloc(sizeof(float));
			*floating=20.08;
			printf("Floating address is %u\n",floating);
			break;
	}

}

void free_func()
{
	
	int ch;
	printf("1-int\n2-float\n3-character");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: Mem_Free(integer);break;
		case 3: Mem_Free(character);
			break;
		case 2: Mem_Free(floating);break;
	}

}
		
		


int main()
{
	
	printf("\n********************************************************************************\n");
	printf("\t\tOUR OWN MALLOC\n");
	printf("**********************************************************************************");
	
	int n;
	printf("\nEnter Size: ");
	scanf("%d",&n);
	
	if(!Mem_Init(n))
	{
		printf("Init failed");
		return 1;
	}
	void *ptr1=Mem_Alloc(4);
	
	printf("Testing our own malloc.......\n");
	printf("Base Address is %u...\n",ptr1);
	
	int ch;
	while(1)
	{
		
		printf("1 : To Check Available Memory\n");
		printf("2 : To Check Allocated Memory\n");
		printf("3 : To Allocate memory dynamically\n");
		printf("4 : To Free Memory of given allocated pointer\n");
		printf("5 : To exit\n");
		printf("Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Available space is %d",current_space);break;
			case 2: printf("Allocated space is %d",n-current_space);break;
			case 3: allocateMemory();break;
			case 4: free_func();break;
			case 5: exit(0);
			

		}
		printf("\n\n\n");
	}
	int i=0;
	/*while(1)
	{
		i++;	
		integer=(int*)Mem_Alloc(sizeof(int));
		printf("Integer address is %u\n",integer);
		if(!integer)
			break;
		floating=(float*)Mem_Alloc(sizeof(float));
		printf("Floating address is %u\n",floating);
		if(!floating)
			break;
		character=(char*)Mem_Alloc(sizeof(char));
		printf("Character address is %u\n",character);
		if(!character)
			break;
	}
	printf("%d",i);	
	
	/*printf("\nDynamically allocating memory for an Integer using our own malloc.......");
        int* integer=(int*)Mem_Alloc(sizeof(int));
	printf("Address of Integer is %u",integer);

	if(!integer)
		printf("Error allocating memory for Integer (NULL)\n");

	
	
	float *floating= (float*)Mem_Alloc(sizeof(float));
	
	if(!floating)
		printf("Error Allocating memory for a floating number using \n");
	printf("Address of floating is %u",floating);

	printf("\nDynamically allocating memory for a Character using our own malloc.......");
        char* character=(char*)Mem_Alloc(sizeof(char));
	printf("Address of character is %u",character);
	
	if(!character)
		printf("Error allocating memory for a character\n");
	
	
	//printf("\nDynamically allocating memory for a floating using our own malloc......");

	Mem_Free(integer);
	//Mem_Free(floating);

	printf("\nDynamically allocating memory for an Integer using our own malloc.......");
        int* integer2=(int*)Mem_Alloc(sizeof(int));
	printf("Address of Integer is %u",integer2);

	if(!integer2)
		printf("Error allocating memory for Integer (NULL)\n");

	printf("\nDynamically allocating memory for an Integer 2 using our own malloc.......");
        char* character2=(char*)Mem_Alloc(sizeof(char));
	printf("\nAddress of Character is %u",character2);
	
	printf("\nCreating 1-D array using Dynamic memory allocation");
	
	int n1;
	printf("\n Enter size of Array:");
	scanf("%d",&n1);
	int *a=(int*)Mem_Alloc(n1*sizeof(int));
	
	printf("\n%u is base address of array",a);*/

	
	
	
	
	
	
	
}
