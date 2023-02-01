class Statistics {
 public:
  void AddNumber(double num);
  double Mean() const;
  double StandardDeviation() const;

 private:
  int count_ = 0;
  double sum_ = 0.0;
  double square_sum_ = 0.0;
  std::vector<double> numbers_;
};