/*
 * Project: Hospital Ward Temperature Monitor
 *
 * Problem: Write a program that records 4 temperature readings for 3 patients in each of 2 wards,
 * then displays each patient's average, how many readings are above 37.5, a warning if the
 * average exceeds 38, and the highest temperature in each ward.
 *
 * Concept: 3D Array (float) with nested for loops
 */
#include <stdio.h>
int main() {
    float t[2][3][4];
    int w, p, r;
    for (w = 0; w < 2; w++)
        for (p = 0; p < 3; p++)
            for (r = 0; r < 4; r++) {
                printf("Ward %d, Patient %d, Reading %d: ", w + 1, p + 1, r + 1);
                scanf("%f", &t[w][p][r]);
            }
    for (w = 0; w < 2; w++) {
        float highest = t[w][0][0];
        printf("\n--- Ward %d ---\n", w + 1);
        for (p = 0; p < 3; p++) {
            float sum = 0;
            int above = 0;
            for (r = 0; r < 4; r++) {
                sum += t[w][p][r];
                if (t[w][p][r] > 37.5) above++;
                if (t[w][p][r] > highest) highest = t[w][p][r];
            }
            float avg = sum / 4;
            printf("Patient %d: Avg = %.2f, Readings above 37.5 = %d", p + 1, avg, above);
            if (avg > 38) printf("  [Average exceeds 38C]");
            printf("\n");
        }
        printf("Highest temperature in Ward %d: %.2f\n", w + 1, highest);
    }
    return 0;
}
