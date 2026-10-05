#include <stdio.h>

// Complete the following function.
void calculate_the_maximum(int n, int k) {
    int AND = 0;   // maximum AND
    int OR = 0;    // maximum OR
    int XOR = 0;   // maximum XOR

    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {

            if (((i & j) > AND) && ((i & j) < k)) {
                AND = i & j;
            }

            if (((i | j) > OR) && ((i | j) < k)) {
                OR = i | j;
            }

            if (((i ^ j) > XOR) && ((i ^ j) < k)) {
                XOR = i ^ j;
            }
        }
    }

    printf("%d\n%d\n%d\n", AND, OR, XOR);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
