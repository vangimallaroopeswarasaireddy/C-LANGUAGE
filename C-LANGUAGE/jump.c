#include <stdio.h>

int main() {
            int n;
            printf("Enter a number: \n");
            scanf("%d", &n);
            if (n%2 == 0)
            goto even;
            else
            goto odd;
even:
            printf("The number is even.\n");
           goto end;
odd:
            printf("The number is odd.\n");
end:
            printf("End of program.\n");
            return 0;
}
