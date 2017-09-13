#include <string>
using namespace std;

int main() {
    string s1 = "42";
    string s2 = s1;
    s2[0] = 'T';
    cout << s1 << endl;
}