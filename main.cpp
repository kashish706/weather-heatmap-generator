#include <iostream>
#include <vector>
using namespace std;

// Function to get color name based on temperature
string getColor(int temp) {
    if (temp >= 40) return "Red";
    else if (temp >= 30) return "Orange";
    else if (temp >= 20) return "Yellow";
    else if (temp >= 10) return "Green";
    else return "Blue";
}

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // Create 2D vector to store temperature values
    vector<vector<int>> tempGrid(rows, vector<int>(cols));

    // Input temperatures
    cout << "Enter temperatures:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Temperature at [" << i << "][" << j << "]: ";
            cin >> tempGrid[i][j];
        }
    }

    // Display heatmap (color names)
    cout << "\nWeather Heatmap (Color-coded):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << getColor(tempGrid[i][j]) << "\t";
        }
        cout << "\n";
    }

    return 0;
}
