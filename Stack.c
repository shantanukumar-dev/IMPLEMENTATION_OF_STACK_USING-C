                    // IMPLEMENTATION OF STACK USING ARRAY
#include <stdio.h>
#include <conio.h>
#define size 10 // DECLARATION OF THE MAXIMUM SIZE OF THE ARRAY
typedef struct stack
{
    int Array[size]; // DECLARTION OF THE ARRAY
    int top;
} stack;
void initialize(stack *s)
{
    s->top = -1; /*INITILIZATION OF TOP OF THE STACK IS -1 BECAUSE,
     STACK IS ALREADY EMPTY*/
}
int isempty(stack *s)
{
    if (s->top == -1) /*WHEN EVER THE TOP OF THE STACK IS -1 THEN,
     STACK IS EMPTY ,OTHERWISE NOT.*/
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(stack *s)
{
    if (s->top == size - 1) /*WHEN THE TOP OF THE STACK POINTS THE SIZE-1 THEN,
     STACK IS FULL.OTHERWISE NOT.*/
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(stack *s, int element)
{
    if (isfull(s)) /*WHEN THE STACK IS ALREADY FULL WE CANOT PUSH THE NEW ELEMENT,
      IN TO THE STACK.THIS CONDITION OTHERWISE KNOWN AS STACK OVERFLOW.*/
    {
        return;
    }
    else
    {
        // OTHER WISE TOP OF THE STACK POINTS TO THE TOP+1.
        s->top = s->top + 1;
    }
    s->Array[s->top] = element; // INSERT THAT ELEMENT IN TO THE ARRAY.
}
void display(stack *s)
{
    /* WE CAN PRINT  ALL THE ELEMENTS OF THE  STACK BY USING NORMAL FOR LOOP,
     FOR LOOP INITILIZATION TO 0 INDEX OF THE ARRAY UP TO TOP OF THE STACK,
     AND IN UPDATION IS INCREASED BY 1. */
    for (int i = 0; i <= s->top; i++)
    {
        printf("%d<-", s->Array[i]); // SIMPLY PRINT THE ARRAY.
    }
}
void pop(stack *s)
{
    /*WHEN EVER THE STACK IS ALREADY EMPTY,THEN WE CAN'T POP THE ELEMENT,
    THIS CONDITION IS KNOWN AS STACK UNDERFLOW.*/
    if (isempty(s))
    {
        return;
    }
    else
    {
        // OTERWISE TOP OF THE STACK POINTS TO THE TOP-1.
        s->top = s->top - 1;
    }
}
int main()
{
    stack s;        // S IS VARIABLE OF THE TYPE STACK.
    initialize(&s); // FUNCTION CALL OF THE INITIALIZE FUNCTION
    isempty(&s);    // FUNCTION CALL OF THE ISEMPTY FUNCTION
    isfull(&s);     // FUNCTION CALL OF THE ISFULL FUNCTION
    // WE CALL THE PUSH FUNCTION 5 TIMES
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);
    display(&s); // FUNCTION CALL OF THE DISPLAY FUNCTION
    pop(&s);     // FUNCTION CALL OF THE POP FUNCTION
    printf("\n");
    display(&s);
    pop(&s);
    printf("\n");
    display(&s);
    getch();
    return 0;
}
                   /*NAME-SHANTANU KUMAR MAHANTA
                   EMAIL:-SHANTANUMAHANTA2003@GMAIL.COM
                   LINKEDIN:-SHANTANU KUMAR MAHANTA
                   SAMBALPUR UNIVERSITY,JYOTI VIHAR BURLA,
                          SAMBALPUR,ODISHA*/