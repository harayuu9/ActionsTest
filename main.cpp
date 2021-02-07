#include <compare>  //<=>利用の場合必須
#include <iostream>

struct C {
  int x;
  int y;
  double v;
  char str[32];

  //<=>をpublicで定義しておくことで、その他の演算子が導出される
  auto operator<=>(const C&) const = default;
};


int main() {
  C c1 = {10, 20, 3.1415, "Three-way Comparison" };
  C c2 = {10, 20, 3.1415, "Spaceship Operator" };

  //三方比較演算子そのものによる比較
  std::cout << ((c1 <=> c2) == 0) << std::endl;
  std::cout << ((c1 <=> c2) <  0) << std::endl;
  std::cout << ((c1 <=> c2) >  0) << std::endl;

  //クラスCは6つの演算子による比較が可能
  std::cout << (c1 <  c2) << std::endl;
  std::cout << (c1 <= c2) << std::endl;
  std::cout << (c1 >  c2) << std::endl;
  std::cout << (c1 >= c2) << std::endl;
  std::cout << (c1 == c2) << std::endl;
  std::cout << (c1 != c2) << std::endl;
}