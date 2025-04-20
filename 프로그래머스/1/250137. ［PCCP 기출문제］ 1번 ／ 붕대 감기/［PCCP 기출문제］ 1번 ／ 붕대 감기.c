#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// bandage_len은 배열 bandage의 길이입니다.
// attacks_rows는 2차원 배열 attacks의 행 길이, attacks_cols는 2차원 배열 attacks의 열 길이입니다.
int solution(int bandage[], size_t bandage_len, int health, int** attacks, size_t attacks_rows, size_t attacks_cols) {
    int answer = 0;
    int temp_health = health;
    int current_attack = 0;
    int heal_count = 0;
    
    for (int i = 0; i <= attacks[attacks_rows - 1][0]; i++)
    {
        if (i == attacks[current_attack][0])
        {
            temp_health -= attacks[current_attack][1];
            current_attack += 1;
            heal_count = 0;
            if (temp_health <= 0)
                return (-1);
            continue;
        }
        else
        {
            heal_count++;
            if (heal_count != bandage[0] && i != 0)
            {
                temp_health = temp_health + bandage[1] > health ? health : temp_health + bandage[1];
            }
            else
            {
                temp_health = temp_health + bandage[2] + bandage[1] > health ? health : temp_health + bandage[2] + bandage[1];
                heal_count = 0;
            }
        }
    }
    answer = temp_health;
    return answer;
}