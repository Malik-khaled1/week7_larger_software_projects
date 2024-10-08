#include<stdio.h>
#include<assert.h>
#include<stdbool.h>

#include <assert.h>
#include "stack.h"  // Inkluder din stack header-fil

int main() {
    stack p;

    // Test 1: Efter initialize(s) skal stacken være tom.
    initialize(&p);
    assert(empty(&p));  // Stacken skal være tom efter initialisering

    // Test 2: Efter push(x, s); y = pop(s); skal stacken være uændret og x == y.
    int x = 10;
    push(x, &p);  // Pusher 10 til stacken
    int y = pop(&p);  // Poppet element skal være 10
    assert(x == y);  // x skal være lig med y
    assert(empty(&p));  // Stacken skal være tom igen efter push og pop

    // Test 3: Test LIFO-princippet
    int x0 = 20;
    int x1 = 30;
    
    push(x0, &p);  // Pusher 20 til stacken
    push(x1, &p);  // Pusher 30 til stacken
    
    int y0 = pop(&p);  // Det første pop skal returnere 30 (x1)
    int y1 = pop(&p);  // Det andet pop skal returnere 20 (x0)
    
    assert(x1 == y0);  // x1 skal være lig med y0
    assert(x0 == y1);  // x0 skal være lig med y1
    assert(empty(&p));  // Stacken skal igen være tom efter to pushes og to pops

    printf("y = %d, y0 = %d, y1 = %d\n", y, y0, y1);

    return 0;  // Testene er bestået, hvis ingen asserts fejler
}
