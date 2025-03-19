#include <iostream>
using namespace std;

void inputQ();
void inputP();
void calculateRemainder();
void calculateQuotient();

int Q; // Переменная для хранения целого числа Q

int main() {
  int choice;

  do {
    // Вывод меню
    std::cout << "Menu:\n";
    std::cout << "1. Enter integer Q\n";
    std::cout << "2. Enter natural number P (less than Q)\n";
    std::cout << "3. Calculate remainder of Q divided by P\n";
    std::cout << "4. Calculate integer part of Q divided by P\n";
    std::cout << "0. Exit\n";
    std::cout << "Choose the menu item: ";
    std::cin >> choice;

    switch (choice) {
    case 1:
      inputQ();
      break;
    case 2:
      inputP();
      break;
    case 3:
      calculateRemainder();
      break;
    case 4:
      calculateQuotient();
      break;
    case 0:
      std::cout << "Exiting the program.\n";
      break;
    default:
      std::cout << "Invalid choice. Please try again.\n";
    }
  } while (choice != 0);

  return 0;
}

bool isValidNumber(const string &input) {
  if (input.empty())
    return false; // Пустая строка не является корректным числом
  for (char c : input) {
    if (!isdigit(c) && c != '-')
      return false; // Разрешаем отрицательные числа
  }
  return true;
}

// Функция для ввода числа
//
void inputQ() {
  cout << "Enter integer Q: ";
  cin >> Q;
}

void inputP() {}

void calculateRemainder() {}

void calculateQuotient() {}