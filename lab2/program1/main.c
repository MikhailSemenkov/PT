#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void start();
void enter(char *input);
int check(char *input);
int ifdigit(char ch);

// Функції заміни для кожного розряду нашого числа
void F1000(char ch);
void F100(char ch);
void F10(char ch);
void F1(char ch);

// функції які відповідають за побудову заставки
void gotoxy(int row, int col);
void frame(int x1, int y1, int x2, int y2);
void opening();

int main()
{
    // Виклик функції заставки
    opening();
    start();
    int run = 1;
    char input[5];
    // цикл для можливості повторного виконання програми
    while (run)
    {
        // Введення масиву
        enter(input);
        // Функція з циклом для перевірки
        if (check(input))
        {
            // функція для перевірки довжини нашого тексту
            if (strlen(input) > 4)
            {
                printf("Inputed number higher than 9999\n");
            }
            else
            {
                // в залежності від розряду(довжини) буде викликатися
                // різна кількість функцій які відповідають за відповідний розряд
                switch(strlen(input))
                {
                case 4:
                    F1000(input[0]);
                    F100(input[1]);
                    F10(input[2]);
                    F1(input[3]);
                    break;
                case 3:
                    F100(input[0]);
                    F10(input[1]);
                    F1(input[2]);
                    break;
                case 2:
                    F10(input[0]);
                    F1(input[1]);
                    break;
                case 1:
                    F1(input[0]);
                    break;
                }
            }
        }
        // частина, яка відповідає за повторне введення даних
        printf("\nDo you want to repeat?[Y/N]: ");
        char ch;
        gets(&ch);
        switch (ch)
        {
        case 'y':
        case 'Y':
            printf("Repeating...\n");
            break;
        case 'n':
        case 'N':
            run = 0;
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
    printf("|| KV-03 Uliana Vinnikove 02 ||\n");
}

void enter(char *input)
{
    printf("Input some text: ");
    gets(input);
}

int check(char *input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        // перевірка початкового та кожного наступного елементу
        // на відповідність заданій умові
        if(!ifdigit(input[i]) || input[0] == '0')
        {
            printf("Invalid input\n");
            return 0;
        }
    }
    return 1;
}

// функція яка відповідає за перевірку поточного елементу
int ifdigit(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Фунція для тисяч, так як М у нас максимальне число,
// то для виведення від 1000 до 9000 використаємо цикл
void F1000(char ch)
{
    for(; ch >= '1'; ch--)
    {
        printf("M");
    }
}
// функція для сотень
void F100(char ch)
{
    switch(ch)
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
// функція для десятків
void F10(char ch)
{
    switch(ch)
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
// функція для одиниць
void F1(char ch)
{
    switch(ch)
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
// функція для створення та виводу заставки
void gotoxy (int row, int col)
{
    printf("\033[%d;%dH", col, row);
}

void frame (int x1, int y1, int x2, int y2)
{
    int i;
    gotoxy(x1, y1);
    printf("\311");
    for (i = (x1 + 1); i <= (x2 - 1); i++)
        printf("\315");

    printf("\273");
    for (i = (y1 + 1); i <= (y2 - 1); i++)
    {
        gotoxy(x1, i);
        printf("\272");
        gotoxy(x2, i);
        printf("\272");
    }
    gotoxy(x1, y2);
    printf("\310");

    for (i = (x1 + 1); i <= (x2 - 1); i++)
        printf("\315");
    printf("\274");
    return;
}
void opening()
{
    system ("cls");
    frame (10, 5, 70, 18);
    gotoxy(34, 8);
    printf("Home work Task");
    gotoxy(33, 10);
    printf("from programming");
    gotoxy(34, 12);
    printf("Uliana Vinnikova");
    gotoxy(35, 14);
    printf("Variant 02");
    gotoxy(35, 17);
    printf("Kyiv 2020");
    getch();
    system ("cls");
    return ;
}
