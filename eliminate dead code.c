#include <stdio.h>
#include <stdbool.h>

bool isVariableUsed(int variableValue) {
    return variableValue > 0;
}


void eliminateDeadCode(int* variable1, int* variable2, int* variable3) {
    if (!isVariableUsed(*variable1)) {
        *variable1 = 0; 
    }
    if (!isVariableUsed(*variable2)) {
        *variable2 = 0;
    }
    if (!isVariableUsed(*variable3)) {
        *variable3 = 0; 
    }
}

int main() {
    int var1 = 5;
    int var2 = 0;
    int var3 = -10;


    eliminateDeadCode(&var1, &var2, &var3);

    printf("Variable 1: %d\n", var1);
    printf("Variable 2: %d\n", var2);
    printf("Variable 3: %d\n", var3);

    return 0;
}
