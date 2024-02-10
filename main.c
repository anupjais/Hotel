#include"hotel.h"
int main()
{
    printf("Welcome To our Home Page..\n");
    int flag=1;
    while(flag)
    {
        cls();
        MainMenus();
        Enter();
        int mainMenu;
        scanf("%d",&mainMenu);
        switch(mainMenu)
        {
            case 1:
                printf("Work In Progress");
                mainMenu = Conti();
                break;
            case 2:
                // printf("Rooms In Progress");
                Rooms();
                mainMenu = Conti();
                break;
            case 3:
                printf("Servises In Progress");
                mainMenu = Conti();
                break;
            case 4:
                printf("About In Progress");
                mainMenu = Conti();
                break;
            case 5:
                printf("Contect In Progress");
                mainMenu = Conti();
                break;
            case 0:
                // printf("Thank you for visiting to us, pleasure meeting you\nHappy Journey; visit again\n");
                // exit(0);
                EXIT();
            default:
                printf("Wrong input");
        }
    }
    return 0;
}