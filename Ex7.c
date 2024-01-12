#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int longest_substring(char *s, int k) {
    // ประกาศตัวแปร
    int distinct[26] = {0};
    int max_length = 0;
    int current_length = 0;
    int distinct_count = 0;

    // วนซ้ำสตริง
    for (int i = 0; i < strlen(s); i++) {
        // ตรวจสอบว่าตัวอักษรนี้เคยปรากฏในสตริงย่อยหรือไม่
        if (distinct[s[i] - 'a'] == 0) {
            distinct_count++;
        }
        distinct[s[i] - 'a']++;

        // ตรวจสอบว่าจำนวนตัวอักษรที่ต่างกันอย่างน้อย k หรือไม่
        while (distinct_count > k) {
            distinct[s[current_length] - 'a']--;
            if (distinct[s[current_length] - 'a'] == 0) {
                distinct_count--;
            }
            current_length++;
        }

        // อัปเดตความยาวของสตริงย่อย
        max_length = fmax(max_length, i - current_length + 1);
    }

    // คืนค่าความยาวของสตริงย่อยสูงสุด
    return max_length;
}

int main() {
    char s[] = "ababcaaadc";
    int k = 2;

    printf("The length of the longest substring with at least %d distinct characters is: %d\n", k, longest_substring(s, k));

    return 0;
}
