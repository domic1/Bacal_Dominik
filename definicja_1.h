#include <vector>

template <typename T>
class Sequence {
 public:
  void append(T element) {
    elements_.push_back(element);
  }

  T at(int index) const {
    return elements_.at(index);
  }

  int size() const {
    return elements_.size();
  }

 private:
  std::vector<T> elements_;
};
W powyższym przykładzie, Sequence jest szablonem klasy, co pozwala na przechowywanie elementów różnego typu. Klasa przechowuje elementy w wektorze elements_, a metody append, at i size pozwalają na dodawanie elementów, dostęp do konkretnego elementu i pobieranie liczby elementów w sekwencji.




Dominik Bącal
deklaracja klasy "Sequence" w języku c++
Poniżej przedstawiono deklarację klasy Sequence w języku C++:

cpp
Copy code
template <typename T>
class Sequence {
 public:
  void append(T element);
  T at(int index) const;
  int size() const;

 private:
  std::vector<T> elements_;
};
W powyższej deklaracji klasa Sequence jest szablonem klasy, co oznacza, że można ją zastosować do różnych typów danych (T). Klasa posiada trzy publiczne metody: append do dodawania elementów do sekwencji, at do dostępu do konkretnego elementu i size do pobierania liczby elementów w sekwencji. Wewnętrznie klasa przechowuje elementy w wektorze elements_.




Dominik Bącal
definicja klasy "Statistics" w języku c++
Klasa "Statistics" w języku C++ może reprezentować różne statystyczne funkcje, takie jak średnia, odchylenie standardowe i inne. Poniżej przedstawiono przykład implementacji klasy Statistics:

cpp
Copy code
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
W powyższym przykładzie, klasa Statistics posiada trzy publiczne metody: AddNumber do dodawania liczb do obliczeń statystycznych, Mean do obliczania średniej i StandardDeviation do obliczania odchylenia standardowego. Klasa przechowuje wszystkie dodane liczby w wektorze numbers_, a także trzy zmienne pomocnicze: count_ do zliczania liczby dodanych liczb, sum_ do zliczania sumy dodanych liczb i square_sum_ do zliczania sumy kwadratów dodanych liczb. W ten sposób, można w efektywny sposób obliczać średnią i odchylenie standardowe bez konieczności ponownego przeglądania wektora numbers_.




Dominik Bącal
deklaracja klasy "Statistics" w języku c++
Poniżej przedstawiono deklarację klasy Statistics w języku C++:

cpp
Copy code
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
W powyższej deklaracji klasa Statistics posiada trzy publiczne metody: AddNumber do dodawania liczb do obliczeń statystycznych, Mean do obliczania średniej i StandardDeviation do obliczania odchylenia standardowego. Klasa także posiada cztery zmienne prywatne: count_ do zliczania liczby dodanych liczb, sum_ do zliczania sumy dodanych liczb, square_sum_ do zliczania sumy kwadratów dodanych liczb i wektor numbers_ do przechowywania wszystkich dodanych liczb.




