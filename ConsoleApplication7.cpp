#include <iostream>
#include <vector>

using namespace std;

//1
using Matrix = vector<vector<int>>;
//
//void addColumn(Matrix& matrix, const vector<int>& column, int position) {
//    if (matrix.size() != column.size()) {
//        cout << "Column size does not match matrix row size" << endl;
//        return;
//    }
//
//    for (size_t i = 0; i < matrix.size(); ++i) {
//        matrix[i].insert(matrix[i].begin() + position, column[i]);
//    }
//}
//
//int main() {
//    Matrix matrix = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}
//    };
//
//    vector<int> newColumn = { 10, 11, 12 };
//    int position = 1;
//
//    addColumn(matrix, newColumn, position);
//
//    for (const auto& row : matrix) {
//        for (int elem : row) {
//            cout << elem << " ";
//        }
//        cout << endl;
//    }
//
//}

//2
//void removeColumn(Matrix& matrix, int position) {
//    if (matrix.empty()) {
//        cout << "Matrix is empty!" << endl;
//        return;
//    }
//
//    if (position < 0) {
//        cout << "Invalid column position (negative index)!" << endl;
//        return;
//    }
//
//    if (position >= matrix[0].size()) {
//        cout << "Invalid column position (out of bounds)!" << endl;
//        return;
//    }
//
//    for (size_t i = 0; i < matrix.size(); ++i) {
//        matrix[i].erase(matrix[i].begin() + position);
//    }
//}
//
//int main() {
//    Matrix matrix = {
//        {1, 2, 3, 4},
//        {5, 6, 7, 8},
//        {9, 10, 11, 12}
//    };
//
//    int position = 2;
//
//    removeColumn(matrix, position);
//
//    for (const auto& row : matrix) {
//        for (int elem : row) {
//            cout << elem << " ";
//        }
//        cout << endl;
//    }


