#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int countPrimes(const string& Numfile) {
    ifstream file(Numfile);
    if (!file.is_open()) {
        cout << "Error: Could not open " << Numfile << endl;
        return -1;
    }

    int count = 0, num;
    while (file >> num) {
        if (isPrime(num)) count++;
    }

    file.close();
    return count;
}

int main() {
    int result = countPrimes("NUMS.TXT");
    if (result >= 0)
        cout << "Number of prime numbers: " << result << endl;
    return 0;
}
