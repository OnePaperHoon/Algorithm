#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int A[100][100], B[100][100];
    
    // 행렬 A 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    // 행렬 B 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    // 행렬 덧셈 결과 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d", A[i][j] + B[i][j]);
            if (j < M - 1) printf(" ");  // 마지막 원소가 아니면 공백 출력
        }
        printf("\n");
    }
    
    return 0;
}