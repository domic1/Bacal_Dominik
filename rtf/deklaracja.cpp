template <typename T>
class Sequence {
 public:
  void append(T element);
  T at(int index) const;
  int size() const;

 private:
  std::vector<T> elements_;
};