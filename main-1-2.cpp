#include <iostream>

int is_identity_matrix(int matrix[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j && matrix[i][j] != 1) {
                return 0;
            } else if (i != j && matrix[i][j] != 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int matrix[10][10] = {
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 1}
    };

    int result = is_identity_matrix(matrix);

    if (result == 1) {
        std::cout << "The matrix is an identity matrix." << std::endl;
    } else {
        std::cout << "The matrix is NOT an identity matrix." << std::endl;
    }

    return 0;
}
