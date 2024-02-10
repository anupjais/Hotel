#include"hotel.h"

void cls()
{
    system("clear");
}
int Conti()
{
    printf("\n\n\n\tWants to continue \'0\' for NO \'1\' Yes : ");
    unsigned int conti;
    scanf("%d",&conti);
    switch(conti)
    {
        case 1:
            // MainMenus();
            return conti;
            break;
        case 0:
            EXIT();
            break;
        default:
            cls();
            printf("Wrong Input\n");
            MainMenus();
    }
}
void MainMenus()
{
    cls();
    printf("\n\n\t\t\t1. Home\n\t\t\t2. Rooms\n\t\t\t3. Servises\n\t\t\t4. About us\n\t\t\t5. Contact us\n\t\t\t0. EXIT\n");
}
void EXIT()
{
    printf("Thank You For Visiting To Us, Visit Again.\n");
    exit(0);
}
void Enter()
{
    printf("\n\n\t\t\t Enter your response here : ");
}

//OUR SERVICES
void Home()
{
     printf("\n\n\t\t\tWelcome To The LifeShere Room Servises\n");
}
void Rooms()
{
    Home();
    printf("\n\n\t\t1. Check In\n\t\t2. Check Out\n\t\t3. Hold\n\t\t0. EXIT\n");
}