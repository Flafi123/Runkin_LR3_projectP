#include <functional>
#include <iostream>
#include <string>

using namespace std;

function<void()> EnterNumber(int &varLink, string label);
void inputQ();
void inputP();
void calculateRemainder();
void calculateQuotient();

int Q; // Переменная для хранения целого числа Q
int P;

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
      calculateRemainder();
      break;
    case 4:
      calculateQuotient();
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
function<void()> EnterNumber(int &varLink, string label) {
  return [&varLink, label]() {
    string raw_input;
    cout << label;
    getline(cin, raw_input);

    // Цикл для повторного запроса числа, пока не будет введено корректное
    // значение
    while (!isValidNumber(raw_input)) {
      cout << "Invalid input. " << label;
      getline(cin, raw_input);
    }

    varLink = stoi(raw_input); // Преобразуем строку в целое число
  };
}

// Функция для ввода числа
//
void inputQ() { EnterNumber(Q, "Enter integer Q: "); }

void inputP() {
  do {
    EnterNumber(P, "Enter natural number P (less than Q): ");
    if (P <= 0 || P >= Q) {
      cout << "Error: P should be natural number and less than Q.\n";
    }
  } while (P <= 0 || P >= Q);
}

void calculateRemainder() {
  if (P > 0) {
    int remainder = Q % P;
    cout << "Remainder of Q divided by P: " << remainder << endl;
  } else {
    cout << "Error: P < 0.\n";
  }
}

void calculateQuotient() {}
