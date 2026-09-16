#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

// Calculate the mean
double mean(const vector<double>& data)
{
    double sum = 0;

    for (double value : data)
    {
        sum += value;
    }

    return sum / data.size();
}

// Calculate variance
double variance(const vector<double>& data)
{
    double avg = mean(data);
    double sum = 0;

    for (double value : data)
    {
        sum += pow(value - avg, 2);
    }

    // Sample variance
    return sum / (data.size() - 1);
}

// Calculate standard deviation
double standardDeviation(const vector<double>& data)
{
    return sqrt(variance(data));
}

// Calculate range
double range(const vector<double>& data)
{
    double minimum = data[0];
    double maximum = data[0];

    for (double value : data)
    {
        if (value < minimum)
            minimum = value;

        if (value > maximum)
            maximum = value;
    }

    return maximum - minimum;
}

// Count the number of values
int count(const vector<double>& data)
{
    return data.size();
}

// Calculate product
double product(const vector<double>& data)
{
    double result = 1;

    for (double value : data)
    {
        result *= value;
    }

    return result;
}

int main()
{
    vector<double> data = {2, 4, 6, 8, 10};

    cout << fixed << setprecision(2);

    cout << "Data: ";

    for (double value : data)
    {
        cout << value << " ";
    }

    cout << "\n\n";

    cout << "Count: " << count(data) << endl;
    cout << "Product: " << product(data) << endl;
    cout << "Range: " << range(data) << endl;
    cout << "Variance: " << variance(data) << endl;
    cout << "Standard Deviation: "
         << standardDeviation(data) << endl;

    return 0;
}