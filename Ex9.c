#include <stdio.h>

int find_max_satisfaction(int satisfaction[], int num_elements) {

    int max_satisfaction = 0;

    for (int i = 0; i < num_elements; i++) {
        int current_satisfaction = 0;
        for (int order = i; order < num_elements; order++) {
            current_satisfaction += satisfaction[i] * (order + 1);
            if (current_satisfaction > max_satisfaction) {
                max_satisfaction = current_satisfaction;
            }
        }
    }

    // Return the maximum satisfaction
    return max_satisfaction;
}


int main() {
    // Example usage
    int satisfaction[] = {-1, 0, 5, -7};

    int rows = sizeof(satisfaction) / sizeof(satisfaction[0]);
    int result = find_max_satisfaction(satisfaction, rows);

    printf("Max Satisfaction: %d\n", result);

    return 0;
}
