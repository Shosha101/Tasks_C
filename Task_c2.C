#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define NO_Users 100

struct user
{
    char Passwords[15];
    char Emails[15];
    union {
        int Active_i;
        bool Active_b;
    } u1;
};

int main()
{
    struct user struct_array_users[NO_Users];

    strcpy(struct_array_users[0].Emails, "ahmed");
    strcpy(struct_array_users[0].Passwords, "0100");
    struct_array_users[0].u1.Active_i = 1;

    strcpy(struct_array_users[1].Emails, "ali");
    strcpy(struct_array_users[1].Passwords, "0100");
    struct_array_users[1].u1.Active_i = 0;

    strcpy(struct_array_users[2].Emails, "shosha");
    strcpy(struct_array_users[2].Passwords, "888");
    struct_array_users[2].u1.Active_i = 1;

    char User_Password[15], User_Email[15];
    int indicator_user = 0;

    printf("Sign In:\n\n");
    printf("Enter your Email: ");
    scanf("%s", User_Email);
    printf("Enter your password: ");
    scanf("%s", User_Password);

    while (indicator_user < NO_Users)
    {
        if (strcmp(struct_array_users[indicator_user].Emails, User_Email) == 0)
        {
            if (strcmp(struct_array_users[indicator_user].Passwords, User_Password) == 0)
            {
                if ( struct_array_users[indicator_user].u1.Active_b == true)
                {
                    printf("Successfully, you are logged in.\n");
                    break;
                }
                else
                {
                    printf("Unauthorized!\n");
                    break;
                }
            }
        }

        indicator_user++;
    }

    if (indicator_user == NO_Users)
    {
        printf("Invalid password or email!\n");
    }

    return 0;
}

