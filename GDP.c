#include <stdio.h>
int main(){
    float growth=0.08,GDP=125;
    int year=2014;
    printf("%-6s %-8s\n","NAM","GDP");
    while (GDP<=125*2){
        printf("%-6d %-8.2f\n",year,GDP);
        GDP += GDP*growth;
        year++;
    }
    printf("%-6d %-8.2f",year,GDP);
    return 0;
}