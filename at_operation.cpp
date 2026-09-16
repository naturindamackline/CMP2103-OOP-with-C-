#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;

template <typename T>
class DataFrame {
private:
    vector<string> columnNames;   // names of each column
    vector<vector<T>> data;       // data[row][col]

public:
    // Constructor: takes the grid of values + column names
    DataFrame(vector<vector<T>> values, vector<string> names)
        : data(values) {}   // matches declaration order



    // ---- at(): returns a single scalar value at (row, col) ----
    T at(size_t rowIndex, size_t colIndex) const {
        if (rowIndex >= data.size()) {
            throw out_of_range("at(): row index out of range");
        }
        if (colIndex >= data[rowIndex].size()) {
            throw out_of_range("at(): column index out of range");
        }
        return data[rowIndex][colIndex];
    }
};

int main() {
    // Example DataFrame of doubles
    vector<vector<double>> values = {
        {10, 60},
        {20, 70},
        {30, 80}
    };
    vector<string> names = {"foo", "bar"};

    DataFrame<double> df(values, names);

  

    cout << "at(2, 1): " << df.at(2, 1) << endl;

    // Same class, now used with strings instead of doubles
    vector<vector<string>> strValues = {
        {"a", "x"},
        {"b", "y"}
    };
    vector<string> strNames = {"col1", "col2"};
    DataFrame<string> strDf(strValues, strNames);

    cout << "at(1, 0) on string DataFrame: " << strDf.at(1, 0) << endl;

    return 0;
}
