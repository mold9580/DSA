#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &,const string);

/*
 * implement method/function with name 'merge' below.
 *
 * The function is expected to return a value of type int.
 * The function accepts following parameters:
 * 1. ar is of type vector<int>.
 */



/*
It is imposssible to make it palindrome if we start iterating from the middle of array
start two pointers from ends of array and check whether the elements are equal or not, If equal forward the pointers inwards the array
and try to make the pointers elemet equal by addint to smaller element untill we reach i==j
*/

int merge(vector<int> arr) {
    int n=arr.size();
    if(n<=1) return 0;
    int i=0,j=n-1;
    int count=0;
    while(i<j)
    {
        if(arr[i]==arr[j]) i++,j--;
        else if(arr[i]<arr[j]) arr[i+1]+=arr[i],i++,count++;
        else arr[j-1]+=arr[j],j--,count++;
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_FILE_PATH"));
    fout<<"\n";
    string ar_count_temp;
    getline(cin, ar_count_temp);
    int ar_count = stoi(ltrim(rtrim(ar_count_temp)));

    vector<int> ar(ar_count);

    string ar_input_temp;
    getline(cin, ar_input_temp);
    vector<string> ar_input = split(rtrim(ar_input_temp)," ");
    for (int i = 0; i < ar_count; i++) {
        int ar_item = stoi(ltrim(rtrim(ar_input[i])));
        ar[i] = ar_item;
    }

    int outcome = merge(ar);

    fout << outcome;
    fout << "\n";
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str,const string delimiter) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(delimiter, start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

