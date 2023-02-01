#include <vector>
#include <cmath>

class Statistics {
 public:
  Statistics() = default;

  void AddNumber(double num);
  double Mean() const;
  double StandardDeviation() const;

 private:
  int count_ = 0;
  double sum_ = 0.0;
  double square_sum_ = 0.0;
  std::vector<double> numbers_;
};

void Statistics::AddNumber(double num) {
  numbers_.push_back(num);
  ++count_;
  sum_ += num;
  square_sum_ += num * num;
}

double Statistics::Mean() const {
  return sum_ / count_;
}

double Statistics::StandardDeviation() const {
  double mean = Mean();
  return sqrt(square_sum_ / count_ - mean * mean);
}