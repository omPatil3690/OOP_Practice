#include <bits/stdc++.h>
using namespace std;

int random_number(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

int main()
{
    // Open the input file
    ifstream i_data("data.txt");

    if (!i_data)
    {
        cout << "Error opening file" << endl;
        return 1;
    }
    else
    {
        string line;

        // Skip the first line (header)
        getline(i_data, line);

        // Open the output file in append mode
        ofstream o_data("output.txt", ios::app);
        if (!o_data)
        {
            cout << "Error creating output file" << endl;
            return 1;
        }

        // Read each line of the file
        while (getline(i_data, line))
        {
            // Use a stringstream to each line
            stringstream ss(line);
            string token;
            int max, min, no_of;

            if (getline(ss, token, ','))
            {
                max = stoi(token);
            }
            if (getline(ss, token, ','))
            {
                min = stoi(token);
            }
            if (getline(ss, token, ','))
            {
                no_of = stoi(token);
            }

            cout << "Max: " << max << ", Min: " << min << ", No of random numbers: " << no_of << endl;

            // Generate the random numbers and store them in an array
            int a[no_of];
            for (int i = 0; i < no_of; i++)
            {
                a[i] = random_number(min, max);
                cout << a[i] << " ";
            }
            cout << endl;

            // Sort the array
            sort(a, a + no_of);

            // Write the sorted array to the file
            o_data << "Random numbers (sorted): ";
            for (int i = 0; i < no_of; i++)
            {
                o_data << a[i];
                if (i != no_of - 1)
                {
                    o_data << ", ";
                }
            }
            o_data << endl; // Add a newline after each array
        }

        // Close the output file
        o_data.close();
    }
    return 0;
}
