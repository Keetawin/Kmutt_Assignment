#include <stdio.h>
#include <stdlib.h>

int getint(int min, int max)
{
    int num = 0;
    char ch;
    while (scanf("%d%c", &num, &ch) == 0 || (ch != '\n' && ch != ' ') || num < min || num > max)
    {
        rewind(stdin);
        printf("Invaid input please enter number again.(%d -%d)", min, max);
    }
    return num;
}

int menu1(int *x)
{
    int *p = x; //Pointer to x[0]
    char ch;
    while (scanf("%d%c", &*p, &ch) == 0 || (ch != '\n' && ch != ' ') || *p >= 0)
    {
        rewind(stdin);
        printf("");
        p++;
    }
}

int get_menu()
{ 
    int sel;
    printf(" ************************************************\n");
    printf(" * Assignment 7 Test Array *\n");
    printf(" ************************************************\n");
    printf(" * 1.Add data *\n");
    printf(" * 2.Show data *\n");
    printf(" * 3.Sort data *\n");
    printf(" * 4.Delete data *\n");
    printf(" * 5.Calculate statistic *\n");
    printf(" * 0.Exit *\n");
    printf(" ************************************************\n");
    printf(" Select menu number : ");
    sel = getint(0,5);
    return sel;
}

int main()
{
    int x[100] = {-1};
    system("cls");
    int menu = get_menu();
    int i=0;
    if (menu == 1){
        menu1(x);
        
     }
    // if (menu == 2){
        
    // }
    // if (menu == 3){

        
    //  }
    // if (menu == 4){

        
    // }
    // if (menu == 5){

        
    // }
    // if (menu == 0){

        
    // }

    return 0;
}