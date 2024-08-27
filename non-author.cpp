#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> authors(5); 
    vector<int> contribution(5);    
    cout << "Enter the names of 5 authors:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Author " << (i + 1) << ": ";
        getline(cin, authors[i]);
    }
    cout << "\nDid the following authors work on the paper? (Enter 1 for Yes, 0 for No)" << endl;
    for (int i = 0; i < 5; i++) {
        cout << authors[i] << ": ";
        cin >> contribution[i];
    }
    cout << "\nThe non-contributing author(s):" << endl;
    bool nonContributorFound = false;
    for (int i = 0; i < 5; i++) {
        if (contribution[i] == 0) {
            cout << authors[i] << endl;
            nonContributorFound = true;
        }
    }

    if (!nonContributorFound) {
        cout << "All authors contributed to the paper." << endl;
    }

    return 0;
}

