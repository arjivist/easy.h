#include <iostream>;
using namespace std;
int main() {
    int num;
    cin >> num;

}

int itc_revnbr(int num) {
    int firstletter = num / 100;
    int secondletter =  num /  10;
    int thirdletter = num % 100;
    cout << thirdletter << secondletter << firstletter;
}
