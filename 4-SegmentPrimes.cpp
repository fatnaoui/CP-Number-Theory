#include <iostream>
#include <vector>
#include <cmath> // for sqrt

using namespace std;

const int N = 100000;
vector<int> primes;
vector<bool> is_prime(N + 1, true);

void sieve() {
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i * i <= N; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j <= N; j += i) {
        is_prime[j] = false;
      }
    }
  }
  // Pre-compute primes up to the square root of N
  for (int i = 2; i <= sqrt(N); i++) {
    if (is_prime[i]) {
      primes.push_back(i);
    }
  }
}

int main() {
  sieve();
  int t;
  cin >> t;
  while (t--) {
    int m, n;
    cin >> m >> n;
    vector<bool> segment(n - m + 1, true);

    if (m == 1) m++; // 1 is not a prime number

    for (auto x : primes) {
      // Check only multiples greater than or equal to m
      int start = max(m, x * ((m + x - 1) / x)); 

      for (int i = start; i <= n; i += x) {
        segment[i - m] = false;
      }
    }

    for (int i = m; i <= n; i++) {
      if (segment[i - m] && i != 1) {
        cout << i << ' ';
      }
    }
    cout << endl;
  }
  return 0;
}