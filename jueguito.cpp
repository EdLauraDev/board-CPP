#include<iostream>
#include<conio.h>

#define FILA 8
#define COLUMNA 8

using namespace std;

int desicion(int x,int y,char c);
void bucle(int x,int y);

int main()
{
    int x = 0;
    int y = 0;
    int b = 0;
    int a = 0;
    char z;
    system("cls");
    bucle(b,a);

    desicion(x,y,z);




    return 0;
}



int desicion(int x,int y,char c)
{
    int k = 0;
    do{
        c = getch();
            switch(c)
            {
                case 'a':
                    x = x - 1;
                    if(x < 0)
                    x = 0;
                    break;

                case 's':
                    y = y + 1;
                    if(y > 7)
                    y = 7;
                    break;
            
                case 'd':
                    x = x + 1;
                    if(x > 7)
                    x = 7;
                    break;

                case 'w':
                    y = y - 1;
                    if(y < 0)
                    y = 0;
                    break;

                case 'p':
                    return k = 2;
                    break;

                default:
                    break;

            }

            if(x == 7&&y == 7)
                {
                    system("cls");
                    cout<<"GG llegaste a la meta";
                    return k = 2;
                }
            bucle(x,y);

   
        }while(k != 2);
}
void bucle(int x,int y)
{

    system("cls");

    for (size_t i = 0; i < FILA; i++)
    {
        for (size_t j = 0; j < COLUMNA; j++)
        {
            if(i == y  &&j == x)
                cout<<"c  ";

            else{
                if(i == 7&&j == 7)
                    cout<<"M  ";
                
                else{
                    cout<<"   ";
                }
            }
        }
        cout<<"\n";
        
    }
}