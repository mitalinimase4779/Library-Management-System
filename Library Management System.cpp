#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()

{
      char name[20];
      char password[10];
      char book_name[100];
     
      printf("Enter username: ");
      scanf("%s",name);
     
      printf("Enter password: ");
      scanf("%s",password);
      
      if (strcmp(name, "SDP") == 0 && strcmp(password, "LMS") == 0 )
    
    
      {
	  
      printf("\n\n*/*/*/*/*/*/*/Congratulations*/*/*/*/*/*/*/ \n You Have Enter Right Data !!!\n");
      
	  
	  
	  struct library 
	  {
	  	
	 char book_name[100];
	 char author[100];
	 int id;
	 int pages;
	 float price;
	 int edition;
	
     };

    {
	
	struct library lib[100];
    char ar_nm[30], bk_nm[30];
    int id = 0;

    
	

	
	int i,input, count;
	
     
	i = input = count =  0;

	// Iterate the loop
	while (input != 6) {

    
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
    
    
    
    printf("\n\n !!!***!!!***!!!***!!!***!!! MAIN MENU !!!***!!!***!!!***!!!***!!!***!!!");
    
    
    

    printf("\n\n\n*************************************************");
    printf("\n*************************************************");

    
   		printf("\n\n1. You want to Add Book Information ?"); 
		printf("\n2. You want to Display Book Information ?\n");
		printf("3. You want to see List of All Books Of "
			"Given Author ? \n");
		printf("4.You want to see List the title of specified book ?\n");	
		printf(
			"5. You want to see List The Count Of Book"
			"s In The Library ? \n");
	    printf("6.You want to Exit ? \n ");
	
	printf("\n\n*************************************************");
	printf("\n*************************************************");


		printf("\n\nEnter one of "
			"the above: ");
		scanf("%d", &input);
		
		
   
   
      switch (input) 
	  
	  {

		
		case 1:

			printf("Enter book name  = ");
			scanf("%s", &lib[i].book_name);
			
			printf("Enter author name = ");
			scanf("%s", &lib[i].author);

			
			printf("Enter pages = ");
			scanf("%d", &lib[i].pages);
			
			printf("Enter price = ");
			scanf("%f", &lib[i].price);
			
			
			printf("Enter Edition = ");
			scanf("%d", &lib[i].edition);
			
			printf("Enter ID = ");
			scanf("%d", &lib[i].id);
			
			printf("\n Book Information Inserted Sucessfully !!!! ");			
			
			
			count++;

			break;
			
			
			
	    case 2:
			printf("you have entered"
				" the following "
				"information =\n\n");
				
			for (i = 0; i < count; i++) 
			
			{

				printf("\n\n\n 1] book name = %s",
					lib[i].book_name);

				printf("\t\n 2] author name = %s",
					lib[i].author);

				printf("\t\n 3] pages = %d",
					lib[i].pages);

				printf("\t\n 4] price = %f",
					lib[i].price);
					
				printf("\t\n 5] Edition = %d",lib[i].edition);
				
				printf("\t\n 6] Book ID = %d",lib[i].id);
				
			}
			
			break;
			
		
		case 3:
			printf("Enter author name : ");
			scanf("%s",ar_nm);
			
			for (i = 0; i < count; i++) 
			{

				if (strcmp(ar_nm,lib[i].author)== 0)
				{
				
				printf("\n\n\n 1] book name = %s",
					lib[i].book_name);

				printf("\t\n 2] author name = %s",
					lib[i].author);

				printf("\t\n 3] pages = %d",
					lib[i].pages);

				printf("\t\n 4] price = %f",
					lib[i].price);
					
				printf("\t\n 5] Edition = %d",lib[i].edition);
				
				printf("\t\n 6] Book ID = %d",lib[i].id);
		        
					}
				
						
			    else
				
			{
					printf(" No books of this author.");
					
			}
					
	            	}
			
			break;
			
			
		case 4:
               printf ("Enter book name : ");
               scanf ("%s",bk_nm);
               
               for (i=0; i<count; i++)
               
               {
                    if (strcmp(bk_nm, lib[i].book_name) == 0)
                    
                    {
                    	printf("\n\n\n 1] book name = %s",
					lib[i].book_name);

				printf("\t\n 2] author name = %s",
					lib[i].author);

				printf("\t\n 3] pages = %d",
					lib[i].pages);

				printf("\t\n 4] price = %f",
					lib[i].price);
					
				printf("\t\n 5] Edition = %d",lib[i].edition);
				
				printf("\t\n 6] Book ID = %d",lib[i].id);
				
					}
						
                    
            else
                    
                    {
                    	printf(" This book is not available ");
					}
                  
		            	}
		            	
				  break;
	
			
			
			
        
        
		// Print total count
		case 5:
			
			printf("\n Total Number of Books in "
				"library : %d ",
				count);
			
			break;
			
			
	    
		
			
		case 6:
			
			 printf("\n\n\n\n\n");
    		 printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    		 printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
             printf("\n\t\t\t       =               ! THANK YOU                 =");
            printf("\n\t\t\t        =              VERY MUCH !                  =");
            printf("\n\t\t\t        =                                           =");
            printf("\n\t\t\t        =             KEEP LEARNING                 =");
            printf("\n\t\t\t        =                                           =");
            printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
            printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
					
			exit(0); 
			
		}
		
		
}
	  
	  
	  }
	  

 }
    else 
    
    {
    	
     printf("\nYOU HAVE ENTER WRONG DATA.\n TRY AGAIN!!!!! \n");
     
    }
    
    return 0 ;
    
	}
    
    
