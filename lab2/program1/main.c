#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


void start();
void enter(char *A);
int check(char *A);
int ifdigit(char a);

//������� ����� ��� ������� ������� ������ �����
void F1000(char a);
void F100(char a);
void F10(char a);
void F1(char a);

//������� �� ���������� �� �������� ��������
void gotoxy(int row, int col);
void frame(int x1, int y1, int x2, int y2);
void opening();

int main()
{
    opening();//������ ������� ��������
    start();
    int f;
    char A[5], b;
    f = 1;
    while (f)//���� ��� ��������� ���������� ��������� ��������
    {
        enter(A);//�������� ������
        if (check(A))//������� � ������ ��� ��������
        {
            //������� ��� �������� ������� ������ ������
            if (strlen(A) > 4)
            {
                printf("Inputed number higher than 9999\n");
            }
            else
            {
                //� ��������� �� �������(�������) ���� �����������
                //���� ������� ������� �� ���������� �� ��������� ������
                switch(strlen(A))
                {
                case 4:
                    F1000(A[0]);
                    F100(A[1]);
                    F10(A[2]);
                    F1(A[3]);
                    break;
                case 3:
                    F100(A[0]);
                    F10(A[1]);
                    F1(A[2]);
                    break;
                case 2:
                    F10(A[0]);
                    F1(A[1]);
                    break;
                case 1:
                    F1(A[0]);
                    break;
                }
            }
        }
        //�������, ��� ������� �� �������� �������� �����
        printf("\nDo you want to repeat?[Y/N]: ");
        gets(&b);
        switch (b)
        {
        case 'y':
        case 'Y':
            printf("Repeating...\n");
            break;
        case 'n':
        case 'N':
            f = 0;
            start();
            break;
        default:
            printf ("Inputed invalid number. Repeating...\n");
            break;
        }
    }
    return 0;
}

void start()
{
    printf("|| KV-03 Vinnikova Uliana 02 ||\n");
}

void enter(char *A)
{
    printf("Input some text: ");
    gets(A);
}

int check(char *A)
{
    for (int i = 0; i < strlen(A); i++)
    {
        //�������� ����������� �� ������� ���������� ��������
        //�� ����������� ������� ����
        if(!ifdigit(A[i]) || A[0] == '0')
        {
            printf("Invalid input\n");
            return 0;
        }
    }
    return 1;
}

//������� ��� ������� �� �������� ��������� ��������
int ifdigit(char a)
{
    if (a >= '0' && a <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//������ ��� �����, ��� �� � � ��� ����������� �����,
//�� ��� ��������� �� 1000 �� 9000 ����������� ����
void F1000(char a)
{
    for(; a >= '1'; a--)
    {
        printf("M");
    }
}
//������� ��� ������
void F100(char a)
{
    switch(a)
    {
    case '0':
        return;
    case '1':
        printf("C");
        break;
    case '2':
        printf("CC");
        break;
    case '3':
        printf("CCC");
        break;
    case '4':
        printf("CD");
        break;
    case '5':
        printf("D");
        break;
    case '6':
        printf("DC");
        break;
    case '7':
        printf("DCC");
        break;
    case '8':
        printf("DCCC");
        break;
    case '9':
        printf("CM");
        break;
    }
}
//������� ��� �������
void F10(char a)
{
    switch(a)
    {
    case '0':
        return;
    case '1':
        printf("X");
        break;
    case '2':
        printf("XX");
        break;
    case '3':
        printf("XXX");
        break;
    case '4':
        printf("XL");
        break;
    case '5':
        printf("L");
        break;
    case '6':
        printf("LX");
        break;
    case '7':
        printf("LXX");
        break;
    case '8':
        printf("LXXX");
        break;
    case '9':
        printf("XC");
        break;
    }
}
//������� ��� �������
void F1(char a)
{
    switch(a)
    {
    case '0':
        return;
    case '1':
        printf("I");
        break;
    case '2':
        printf("II");
        break;
    case '3':
        printf("III");
        break;
    case '4':
        printf("IV");
        break;
    case '5':
        printf("V");
        break;
    case '6':
        printf("VI");
        break;
    case '7':
        printf("VII");
        break;
    case '8':
        printf("VIII");
        break;
    case '9':
        printf("IX");
        break;
    }
}
//������� ��� ��������� �� ������ ��������
void gotoxy (int row, int col)
{
    printf("\033[%d;%dH", col, row);
}

void frame (int x1, int y1, int x2, int y2)
{
    int i;
    gotoxy(x1,y1);
    printf("\311");
    for (i=(x1+1); i<=(x2-1); i++) printf("\315");

    printf("\273");
    for (i=(y1+1); i<=(y2-1); i++)
    {
        gotoxy(x1,i);
        printf("\272");
        gotoxy(x2,i);
        printf("\272");
    }
    gotoxy(x1, y2);
    printf("\310");

    for (i=(x1+1); i<=(x2-1); i++)
        printf("\315");
    printf("\274");
    return ;
}
void opening()
{
    system ("cls");
    frame (10,5,70,18);
    gotoxy(34,8);
    printf("Home work Task");
    gotoxy(33, 10);
    printf("from programming");
    gotoxy(34, 12);
    printf("Uliana Vinnikova");
    gotoxy(35, 14);
    printf("Variant 07");
    gotoxy(35, 17);
    printf("Kyiv 2020");
    getch();
    system ("cls");
    return ;
}
