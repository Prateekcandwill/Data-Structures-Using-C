#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

// All libraries imported ha koi bacha nahi hai

#define MAX_SIZE 7  // Size for both array and stack

// ANSI color codes for better visuals
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"
#define RESET   "\x1B[0m"

// Array implementation
int array[MAX_SIZE];
int array_size = 0;

// Stack implementation
int stack[MAX_SIZE];
int stack_top = -1;

void clear_screen() {
    system("cls || clear");
}

void print_centered(const char* text, int width) {
    int len = strlen(text);
    int padding = (width - len) / 2;
    printf("|");
    for (int i = 0; i < padding; i++) printf(" ");
    printf("%s", text);
    for (int i = 0; i < width - len - padding; i++) printf(" ");
    printf("|\n");
}

void draw_box(const char* title, int width) {
    printf("+");
    for (int i = 0; i < width; i++) printf("-");
    printf("+\n");

    print_centered(title, width);

    printf("+");
    for (int i = 0; i < width; i++) printf("-");
    printf("+\n");
}

void display_menu() {
    clear_screen();
    draw_box(CYAN " DATA STRUCTURE VISUALIZER " RESET, 40);

    printf("|" GREEN " 1. Array Visualizer" RESET);
    for (int i = 0; i < 19; i++) printf(" ");
    printf("|\n");

    printf("|" GREEN " 2. Stack Visualizer" RESET);
    for (int i = 0; i < 20; i++) printf(" ");
    printf("|\n");

    printf("|" RED " 3. Exit" RESET);
    for (int i = 0; i < 30; i++) printf(" ");
    printf("|\n");

    draw_box("", 40);
    printf("\n Select option (1-3): ");
}

// Array operations
void array_insert(int value) {
    if (array_size >= MAX_SIZE) {
        printf(RED "\nARRAY FULL! Cannot insert %d\n" RESET, value);
        printf("Press any key to continue...");
        getch();
        return;
    }
    array[array_size++] = value;
    printf(GREEN "\nInserted %d at index %d\n" RESET, value, array_size-1);
}

void array_delete(int index) {
    if (index < 0 || index >= array_size) {
        printf(RED "\nINVALID INDEX! Must be between 0 and %d\n" RESET, array_size-1);
        printf("Press any key to continue...");
        getch();
        return;
    }
    printf(YELLOW "\nDeleted %d from index %d\n" RESET, array[index], index);
    for (int i = index; i < array_size-1; i++) {
        array[i] = array[i+1];
    }
    array_size--;
}

void display_array() {
    printf("\n");
    draw_box(BLUE " ARRAY VISUALIZATION " RESET, 40);
    printf("| Index |  0 |  1 |  2 |  3 |  4 |  5 |  6 |\n");
    printf("|-------|----|----|----|----|----|----|----|\n");
    printf("| Value |");

    for (int i = 0; i < MAX_SIZE; i++) {
        if (i < array_size) {
            printf(MAGENTA " %2d " RESET "|", array[i]);
        } else {
            printf("    |");
        }
    }

    printf("\n+------------------------------------------+\n");
    printf("|" YELLOW " Commands:                          " RESET "|\n");
    printf("| ins <val> - Insert value at end        |\n");
    printf("| del <idx> - Delete value at index      |\n");
    printf("| back      - Return to menu            |\n");
    printf("+------------------------------------------+\n");
    printf("> ");
}

void array_visualizer() {
    char input[20];
    int value;

    while (1) {
        clear_screen();
        draw_box(BLUE " ARRAY VISUALIZER " RESET, 40);
        display_array();

        scanf("%s", input);

        if (strcmp(input, "ins") == 0) {
            if (scanf("%d", &value) == 1) {
                array_insert(value);
            } else {
                printf(RED "\nInvalid input! Enter a number after ins\n" RESET);
                while (getchar() != '\n'); // Clear input buffer
                printf("Press any key to continue...");
                getch();
            }
        } else if (strcmp(input, "del") == 0) {
            if (scanf("%d", &value) == 1) {
                array_delete(value);
            } else {
                printf(RED "\nInvalid input! Enter an index after del\n" RESET);
                while (getchar() != '\n');
                printf("Press any key to continue...");
                getch();
            }
        } else if (strcmp(input, "back") == 0) {
            return;
        } else {
            printf(RED "\nInvalid command!\n" RESET);
            printf("Valid commands: ins, del, back\n");
            printf("Press any key to continue...");
            getch();
        }
    }
}

// Stack operations
void stack_push(int value) {
    if (stack_top >= MAX_SIZE - 1) {
        printf(RED "\nSTACK OVERFLOW! Cannot push %d\n" RESET, value);
        printf("Press any key to continue...");
        getch();
        return;
    }
    stack[++stack_top] = value;
    printf(GREEN "\nPushed %d to stack\n" RESET, value);
}

void stack_pop() {
    if (stack_top < 0) {
        printf(RED "\nSTACK UNDERFLOW! Stack is empty\n" RESET);
        printf("Press any key to continue...");
        getch();
        return;
    }
    printf(YELLOW "\nPopped %d from stack\n" RESET, stack[stack_top--]);
}

void display_stack() {
    printf("\n");
    draw_box(BLUE " STACK VISUALIZATION " RESET, 40);
    printf("|          +-----------+\n");

    if (stack_top == -1) {
        printf("|          |   EMPTY   |\n");
    } else {
        for (int i = MAX_SIZE - 1; i >= 0; i--) {
            printf("|          |");
            if (i <= stack_top) {
                printf(" [%2d] ", stack[i]);
                if (i == stack_top) printf(MAGENTA "↑" RESET);
                else printf(" ");
            } else {
                printf("       ");
            }
            printf("|\n");
        }
    }

    printf("|          +-----------+\n");
    printf("|" YELLOW " Commands:                          " RESET "|\n");
    printf("| push <num> - Add to stack        |\n");
    printf("| pop        - Remove from stack   |\n");
    printf("| back       - Return to menu      |\n");
    printf("+----------------------------------+\n");
    printf("> ");
}

void stack_visualizer() {
    char input[20];
    int value;

    while (1) {
        clear_screen();
        draw_box(BLUE " STACK VISUALIZER " RESET, 40);
        display_stack();

        scanf("%s", input);

        if (strcmp(input, "push") == 0) {
            if (scanf("%d", &value) == 1) {
                stack_push(value);
            } else {
                printf(RED "\nInvalid input! Enter a number after push\n" RESET);
                while (getchar() != '\n');
                printf("Press any key to continue...");
                getch();
            }
        } else if (strcmp(input, "pop") == 0) {
            stack_pop();
        } else if (strcmp(input, "back") == 0) {
            return;
        } else {
            printf(RED "\nInvalid command!\n" RESET);
            printf("Valid commands: push, pop, back\n");
            printf("Press any key to continue...");
            getch();
        }
    }
}

int main() {
    int choice;

    while (1) {
        display_menu();
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf(RED "\nInvalid input! Please enter 1-3\n" RESET);
            printf("Press any key to continue...");
            getch();
            continue;
        }

        switch (choice) {
            case 1:
                array_visualizer();
                break;
            case 2:
                stack_visualizer();
                break;
            case 3:
                clear_screen();
                draw_box(CYAN " THANK YOU (USE ME AGAIN)" RESET, 40);
                printf("\n\n");
                return 0;
            default:
                printf(RED "\nInvalid choice(READ THE INSTRUCTIONS AGAIN)! Please enter 1-3\n" RESET);
                printf("Press any key to continue...");
                getch();
        }
    }

    return 0;
}
