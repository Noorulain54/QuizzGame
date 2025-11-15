#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //system ("cls");
int main()
{
	int option;
	char rp;  //rp is used for replay 
	char opt;  //opt is used for option
	float score; 
	printf("\n\t\t============***===============");
    printf("\n  \t\t\t WELLCOME ");
    printf("\n  \t\t\t TO THE");
	printf("\n   \t\t\t QUIZE GAME");
    printf("\n\t\t============***==============");
    main:
    printf("\n 1)start quiz catagory Cricket");
    printf("\n 2)start quiz catagory Gernalknowledge");
    printf("\n 3)start quiz catagory science");
    printf("\n 4)start quiz catagory C programing");
    printf("\n select an option from above = ");
    scanf("%d",&option);
    
    printf("press any Key");
    getch();
    system("cls"); 
    switch(option){
    	case 1:
    		printf("\nQ1-Holkar Trophy is associated with which sport?");
    		printf("\nA)Bridge \nB)Hockey \n C)Football \n D)Badminton");
    		printf("\nEnter the correct option =");
    		scanf("%s",&opt);
    		if(opt=='a'|| opt=='A')
			{
    			printf("\ncorrect");
    		  	score= score+1;
			}
			else
			{
				printf("\nwrong");
			}
			
			printf("\nQ2-Who is the first Indian woman to win an Asian Games gold in 400m run?");
			printf("\nA)M.L. Valsamma \n B)P.T. Usha \n C)Kamaljit Sandhu \n D)K.Malleshwari");
			printf("enter the correct option = ");
			scanf("%s",&opt);
			if(opt=='b'|| opt=='B')
			{
    			printf("\ncorrect");
    		  	score=score+1;
			}
			else
			{
				printf("\nwrong");
			}
			
			printf("\nQ3-With which game does Davis Cup is associated?");
			printf("\n A)Hockey \n B)Table Tennis \n C)Lawn Tennis \n D)polo");
    		printf("\nenter the correct option = ");
			scanf("%s",&opt);
			if(opt=='c'|| opt=='C')
			{
    			printf("\ncorrect");
    		  	score=score+1;
			}
			else
			{
				printf("\nwrong");
			}
			getch();
			system("cls");
			printf("\n======*** Score Board ***======");
			printf("\nEach Quistion has Score = 1 ");
			printf("\nTotal Quistion Score = 12 ");
			printf("\n obtain score = %f",score);
			printf("\n total wrong answer =%f",-score+3);
			
			getch();
			system("cls");
			
            printf("\nDo you wanted to play More (Y/N) = ");
            scanf("%s",&rp);
            if(rp=='Y'|| rp=='y')
            {
            	goto main;
			}
			else
			{
			   	printf("thank you playing with us");
			}
			break;
			case 2:
			printf("\nQ1-Fathometer is used to measure?");
    		printf("\n A)Earthquakes \n B)Rainfall \n C)Ocean depth \n D)Sound intensity");
    		printf("\nEnter the correct option =");
    		scanf("%s",&opt);
    		if(opt=='b'||opt=='B')
			{
    			printf("\ncorrect");
    		  	score= score+1;
			}
			else
			{
				printf("\nwrong");
			}
			
			printf("\nQ2-Fastest Shorthand Writer was?");
			printf("\nA)Dr. G. D. Bist \n B)J.R.D. Tata\n C)J.M. Tagore \n D)Khudada Khan");
			printf("enter the correct option = ");
			scanf("%s",&opt);
			if(opt=='d'||opt=='D')
			{
    			printf("\ncorrect");
    		  	score=score+1;
			}
			else
			{
				printf("\nwrong");
			}
			
			printf("\nQ3-One People, One State, One leader� was the policy of?");
			printf("\n A)Stalin \n B)Hitler \n C)lein \n D)polo");
    		printf("\nenter the correct option = ");
			scanf("%s",&opt);
			if(opt=='b'||opt=='B')
			{
    			printf("\ncorrect");
    		  	score=score+1;
			}
			else
			{
				printf("\nwrong");
			}
			getch();
			system("cls");
			printf("\n======*** Score Board ***======");
			printf("\nEach Quistion has Score = 1 ");
			printf("\nTotal Quistion Score = 12 ");
			printf("\n obtain score = %f",score);
			printf("\n total wrong answer  =%f ",-score+6);
			
			getch();
			system("cls");
			
            printf("\nDo you wanted to play More (Y/N) = ");
            scanf("%s",&rp);
            if(rp=='Y'||rp=='y')
            {
            	goto main;
			}
			else
			{
			   	printf("thank you playing with us");
			}
			break;
			case 3:
			printf("\nQ1-What is the first step in photosynthesis?");
    		printf("\n A)sun light \nB)Rainfall \n C)Producing sugar \n D)Producing water");
    		printf("\nEnter the correct option =");
    		scanf("%s",&opt);
    		if(opt=='a'||opt=='A')
			{
    			printf("\ncorrect");
    		  	score= score+1;
			}
			else
			{
				printf("\nwrong");
			}
			
			printf("\nQ2-In addition to sunlight, what else is required for photosynthesis to take place?");
			printf("\nA) sugar and water \n B)water and oxygen \n C)carbon dioxide and water \n D)oxygen and carbon dioxide");
			printf("\n enter the correct option = ");
			scanf("%s",&opt);
			if(opt=='b'||opt=='B')
			{
    			printf("\ncorrect");
    		  	score=score+1;
			}
			else
			{
				printf("\nwrong");
			}
			
			printf("\nQ3-How many groups of reactions take occur in the process of photosynthesis?");
			printf("\n A)five \n B)four \n C)three \n D)one");
    		printf("\n enter the correct option = ");
			scanf("%s",&opt);
			if(opt=='a'||opt=='A')
			{
    			printf("\ncorrect");
    		  	score=score+1;
			}
			else
			{
				printf("\nwrong");
			}
			getch();
			system("cls");
			printf("\n======*** Score Board ***======");
			printf("\nEach Quistion has Score = 1 ");
			printf("\nTotal Quistion Score = 12 ");
			printf("\n obtain score  = %f",score);
			printf("\n total wrong answer =%f",-score+9);
			
			getch();
			system("cls");
			
            printf("\nDo you wanted to play More (Y/N) = ");
            scanf("%s",&rp);
            if(rp=='Y' || rp=='y')
            {
            	goto main;
			}
			else
			{
			   	printf("thank you playing with us");
			}
			break;
			case 4:
			printf("\nQ1-Identify the incorrect file opening mode from the following?");
    		printf("\n A)r \n B)w \n C)x \n D)a");
    		printf("\nEnter the correct option =");
    		scanf("%s",&opt);
    		if(opt=='c'|| opt=='C')
			{
    			printf("\ncorrect");
    		  	score= score+1;
			}
			else
			{
				printf("\nwrong");
			}
			
			printf("\nQ2-The prototype of a function can be used to?");
			printf("\n A)Define a function  \n B)Declare a function \n C)Erase a function \n D)None of the above ");
			printf("enter the correct option = ");
			scanf("%s",&opt);
			if(opt=='b'|| opt=='B')
			{
    			printf("\ncorrect");
    		  	score=score+1;
			}
			else
			{
				printf("\nwrong");
			}
			
			printf("\nQ3-A bitwise operator '&' can turn-off a particular bit into a number.?");
			printf("\n A)yes \n B)AND \n C).* \n D)||");
    		printf("\nenter the correct option = ");
			scanf("%s",&opt);
			if(opt=='a' || opt=='A')
			{
    			printf("\ncorrect");
    		  	score=score+1;
			}
			else
			{
				printf("\nwrong");
			}
			getch();
			system("cls");
			printf("\n======*** Score Board ***======");
			printf("\nEach Quistion has Score = 1 ");
			printf("\nTotal Quistion Score = 12 ");
			printf("\nTotal obtain score = %f",score);
			printf("\nTotal wrong answers =%f",-score+12);
			
			getch();
			system("cls");
			
            printf("\nDo you wanted to play again (Y/N) = ");
            scanf("%s",&rp);
            if(rp=='Y' || rp=='y')
            {
            	goto main;
			}
			else
			{
			   	printf(" thank you playing with us");
			}
			break;
}
   
    getch();
    
}

