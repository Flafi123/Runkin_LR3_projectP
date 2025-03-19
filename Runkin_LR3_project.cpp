#include <iostream>
using namespace std;

void inputQ();
void inputP();
void calculate1();
void calculate2();

int main() {
  int choice;

  do {
    // Вывод меню
    cout << "Menu:\n";
    cout << "1. Enter integer Q\n";
    cout << "2. Enter natural number P (less than Q)\n";
    cout << "3. Calculate remainder of Q divided by P\n";
    cout << "4. Calculate integer part of Q divided by P\n";
    cout << "0. Exit\n";
    cout << "Choose the menu item: ";
    cin >> choice;

    switch (choice) {
    case 1:
      inputQ();
      break;
    case 2:
      inputP();
      break;
    case 3:
      calculate1();
      break;
    case 4:
      calculate2();
      break;
    case 0:
      cout << "Exiting the program.\n";
      break;
    default:
      cout << "Invalid choice. Please try again.\n";
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

void inputQ() {}

void inputP() {}

void calculate1() {}

void calculate2() {}