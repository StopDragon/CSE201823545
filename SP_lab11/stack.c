#include <stdio.h>

#define MAX_LEN 1000
#define EMPTY -1
#define FULL (MAX_LEN -1)

typedef enum boolean {false, true} boolean;
typedef struct stack{
    char s[MAX_LEN];
    int top;
} stack;

void reset(stack *stk){
    stk -> top = EMPTY;
}

void push(char c, stack *stk){
    stk -> top++;
    stk -> s[stk -> top] = c;
}

char pop(stack *stk){
    return (stk -> s[stk -> top--]);
}

char top(const stack *stk){
    return (stk -> s[stk -> top]);
}

boolean empty(const stack *stk){
    return((boolean)(stk -> top == EMPTY));
}

boolean full(const stack *stk){
    return((boolean)(stk -> top == FULL));
}

int main(void){
    char str[] ="My name is Louis KIM!";
    int i;
    stack s;
    reset(&s);
    printf(" In the string: %s\n", str);
    for(i = 0; str[i] != '\0'; ++i)
        if(!full(&s))
            push(str[i], &s);
    printf("Form the stack: ");
    while(!empty(&s))
        putchar(pop(&s));
    putchar('\n');
    return 0;
}
