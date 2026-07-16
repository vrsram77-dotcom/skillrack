#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        char s[20];

        scanf("%d", &n);
        scanf("%s", s);

        int currentLength = 0;
        int maximumLength = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                currentLength++;

                if (currentLength > maximumLength) {
                    maximumLength = currentLength;
                }
            } else {
                currentLength = 0;
            }
        }

        int answer = (maximumLength + 1) / 2;
        printf("%d\n", answer);
    }

    return 0;
}