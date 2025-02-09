#include<iostream>
using namespace std;

void deletetherow(int arr[][3], int &row, int cole, int rownumber) {
    // Shift the rows after the deleted row to the one above
    for (int i = rownumber - 1; i < row - 1; i++) {
        for (int col = 0; col < cole; col++) {
            arr[i][col] = arr[i + 1][col];
        }
    }
    // After shifting, reduce the row count by 1
    row--;  // Decrease row size after deletion
}

int main() {
    int rowsize = 3, colsize = 3;
    int arr[10][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    // Print the original matrix
    for (int i = 0; i < rowsize; i++) {
        for (int j = 0; j < colsize; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int deleterownumber;
    cout << "Enter the row number to be deleted: ";
    cin >> deleterownumber;

    // Check if the row number is valid
    if (deleterownumber < 1 || deleterownumber > rowsize) {
        cout << "Invalid row number.\n";
        return 1;
    }

    // Call the function to delete the row
    deletetherow(arr, rowsize, colsize, deleterownumber);

    // Print the updated matrix
    cout<<endl << "Matrix after deleting the given row number " << deleterownumber <<endl;
    for (int i = 0; i < rowsize; i++) {
        // Now, print only up to the new rowsize (after the row deletion)
        for (int j = 0; j < colsize; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //still the last row contain old elemetn after the deletion we only shift the elemetn not deleted

    return 0;
}
