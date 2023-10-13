#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define NO_Users 10

struct user
{
    char Passwords[15];
    char Emails[15];
    char Names[15]
};

int main()
{ 
    struct user struct_array_users[NO_Users];

    
    strcpy(struct_array_users[0].Emails, "ahmed");
    strcpy(struct_array_users[0].Passwords, "0100");
        strcpy(struct_array_users[0].Names, "ahmed mohamed");

    strcpy(struct_array_users[1].Names, "ali ahmed");

    strcpy(struct_array_users[1].Emails, "ali");

    strcpy(struct_array_users[1].Passwords, "0100");
    strcpy(struct_array_users[2].Emails, "shosha");
    strcpy(struct_array_users[2].Names, "ibrahim mohamed");

    strcpy(struct_array_users[2].Passwords, "888");
//*************************************************
	char  User_Password[15], User_Email[15];
	int indecator_user = 0;
	
//*************************************************
    printf("Sign In:\n\n");
    printf("Enter your Email: ");
    scanf("%s", User_Email);
    printf("Enter your password: ");
    scanf("%s", User_Password);


    while (indecator_user < NO_Users)
    {
            	                 
	 if (strcmp(struct_array_users[indecator_user].Emails, User_Email) == 0)
		        {
		        	
		            
		            if (strcmp(struct_array_users[indecator_user].Passwords, User_Password) == 0)
		            {
		            	
		                
		                printf("Successfully, you are logined in \n\n");
		            	printf("Your Name: %s\n\n",struct_array_users[indecator_user].Names);


		                
		                
		                break;
		            }
		        }else{
		        	printf("Invalid password or email !");
		        	break;
				}
		    
		     
		        
		        
        indecator_user++;
    }



    return 0;
}

