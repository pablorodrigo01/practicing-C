#include <stdio.h>
#include <stdlib.h>  // Para função srand() e system()
#include <windows.h> // Para função SetConsoleCursorPosition()
#include <conio.h>   // Para função getch() e kbhit()
#include <time.h>    // Para função rand()

// Variáveis Globais
int c[300][2], points = 1, cx = 2, cy = 2;
int food[2], speed = 150;

// FUNÇÕES
void gotoxy(int x, int y)
{ // Função
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){x, y});
}

void create()
{ // Desenha a cobrinha
    int i;
    for (i = 0; i < points; i++)
    {
        gotoxy(c[i][0], c[i][1]);
        printf("%c", 219);
    }
}

void sync()
{ // Atualiza a posição da cobrinha
    int i;
    gotoxy(c[points][0], c[points][1]);
    printf(" ");
    for (i = points; i >= 0; i--)
    {
        c[i + 1][0] = c[i][0];
        c[i + 1][1] = c[i][1];
    }
}

int check()
{ // Vê se a cobrinha enconstou em seu próprio corpo
    int i, checkUp = 0;
    for (i = 1; i < points; i++)
    {
        if (cx == c[i][0] && cy == c[i][1])
        {
            checkUp = 1;
        }
    }
    return checkUp;
}

void createFood()
{ // Gera comida em local aleatório
    gotoxy(food[0], food[1]);
    printf(" ");
    srand(time(NULL));
    food[0] = (rand() % 48) + 1;
    food[1] = (rand() % 18) + 1;
    gotoxy(food[0], food[1]);
    printf("%c", 4);
}

int main()
{
    int i, gameover = 0;
    int key;

    for (i = 0; i < 50; i++)
    { // Linha superior
        gotoxy(i, 0);
        printf("%c", 219);
        Sleep(5); // Pausa execução por 5 milissegunos
    }
    for (i = 0; i < 20; i++)
    { // Coluna da direita
        gotoxy(50, i);
        printf("%c", 219);
        Sleep(5); // Pausa execução por 5 milissegunos
    }
    for (i = 50; i >= 0; i--)
    { // Linha inferior
        gotoxy(i, 20);
        printf("%c", 219);
        Sleep(05); // Pausa execução por 5 milissegunos
    }
    for (i = 20; i > 0; i--)
    { // Coluna da esquerda
        gotoxy(0, i);
        printf("%c", 219);
        Sleep(5); // Pausa execução por 5 milissegunos
    }
    createFood(); // Gera a primeira comida
    create();     // Desenha a cobra
    key = 'd';    // A direção é para a direita
    while (gameover == 0)
    {                  // Enquanto o usuário não perder
        gotoxy(52, 2); // Move o cursor para c: 52, l: 2
        printf("Pontos: %d\t", points);
        gotoxy(52, 4);
        printf("Velocidade: %.2f caracteres/s", 1000 / speed);
        c[0][0] = cx;
        c[0][1] = cy;
        if (kbhit())       // Se alguma tecla for apertada, o valor
            key = getch(); // vai para a variável 'tecla'

        if (key == 'w' || key == 'W' || key == 72)
        {
            cy--;
            if (cy == 0)
                break; // Se a cabeça da cobra estiver na parede superior,
        }              // O jogo acaba
        if (key == 'a' || key == 'A' || key == 75)
        {
            cx--;
            if (cx == 0)
                break; // Se a cabeça da cobra estiver na parede da esquerda,
        }              // O Jogo acaba
        if (key == 's' || key == 'S' || key == 80)
        {
            cy++;
            if (cy == 20)
                break; // Se a cabeça da cobra estiver na parede de baixo,
        }              // O jogo acaba
        if (key == 'd' || key == 'D' || key == 77)
        {
            cx++;
            if (cx >= 50)
                break; // Se a a cabeça da cobra estiver na parede da direida,
        }              // O jogo acaba

        if (cx == food[0] && cy == food[1])
        { // Se a cobra comer a comida
            points++;
            if (speed > 50)
                speed -= 10; // Velocidade em milissegundos abaixa
            createFood();
        }
        gameover = check();
        sync();   // Atualiza a cobra
        create(); // Desenha a cobra
        gotoxy(50, 20);
        Sleep(speed);
    }
    system("cls"); // Quando o usuário perder, limpa a tela e exibe uma mensagem final
    printf("Voce perdeu! Fez %d pontos.\n", points);
    system("pause");
}