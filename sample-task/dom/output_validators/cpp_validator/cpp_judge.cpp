#include "testlib_checker.h"

#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// ./validator judge_in(input) judge_ans feedback_dir [additional_arguments] <
// team_out [ > team_input ]

int main(int argc, char **argv) {
  registerTestlibCmd(argc, argv);


  int A = inf.readInt(), B = inf.readInt();
  int N = ouf.readInt();
  if (N < 1 || N > 1000) {
    wrong_answer("N should be in the range of [1, 1000]");
  }
  vector<int> arr(N);
  int64_t sum = 0;
  for (int i = 0; i < N; ++i) {
    arr[i] = ouf.readInt();
    if (abs(arr[i]) > 1000000) {
      wrong_answer("arr[i] should have absolute value at most 10^6");
    }
    sum += arr[i];
  }
  sort(arr.begin(), arr.end());
  if (sum != 1LL * A * N) {
    wrong_answer("Mean is not correct");
  }
  if (N % 2 == 1) {
    if (arr[N / 2] != B) {
      wrong_answer("Median is not correct");
    }
  } else {
    if (arr[N / 2 - 1] + arr[N / 2] != B * 2) {
      wrong_answer("Median is not correct");
    }
  }
  accept();
}
