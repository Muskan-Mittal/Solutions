#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the howMuchToAsk function below.
 */
int howMuchToAsk(int c, int p) {
    /*
     * Return the amount the cashier should ask the customer or -1 if this exceeds 9.
     */
    int den[]={20,50,100,200,500,1000};
    int near=den[0], change=0;
    int diff=p-c;
    for(int i=0; i<6; i++){
        if(den[i]==diff){
            return 0;
        }
    }
    for(int i=0; i<6; i++){
        if(den[i]<=c){
            near=den[i];
        }
    }
    int near_nxt=den[i];
    change=c-near;
    if()
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string cp_temp;
        getline(cin, cp_temp);

        vector<string> cp = split_string(cp_temp);

        int c = stoi(cp[0]);

        int p = stoi(cp[1]);

        int result = howMuchToAsk(c, p);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
