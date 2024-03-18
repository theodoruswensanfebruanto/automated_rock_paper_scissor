#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  srand(time(nullptr));
  
  while (true) {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif

    cout << "AUTOMATED ROCK PAPER SCISSORS";
    cout << "\n";
    cout << "\n";
    cout << "How many times do you want the game to happen?";
    cout << "\n";

    int how_many_times = 0;
    while (how_many_times <= 0) {
      cout << "Your answer: ";
      cin >> how_many_times;
    }
    cout << "\n";

    vector<string> a = {"Rock", "Paper", "Scissors"};
    int n = a.size();

    int win_number = 0;
    int draw_number = 0;
    int lose_number = 0;

    for (int i = 0; i < how_many_times; i++) {
      int player_answer = rand() % n;
      int randomized_index = rand() % n;

      if (player_answer == randomized_index) {
        draw_number++;
      } else if (player_answer == (randomized_index + 1) % n) {
        win_number++;
      } else {
        lose_number++;
      }
    }

    cout << "WIN: " << win_number;
    cout << "\n";
    cout << "DRAW: " << draw_number;
    cout << "\n";
    cout << "LOSE: " << lose_number;
    cout << "\n";
    cout << "\n";

    cout << "Do you want to restart?";
    cout << "\n";
    cout << "1) Yes";
    cout << "\n";
    cout << "2) No";
    cout << "\n";

    int quit_or_no = 0;
    while (quit_or_no != 1 && quit_or_no != 2) {
      cout << "Choose between 1 and 2: ";
      cin >> quit_or_no;
    }

    if (quit_or_no == 2) {
      break;
    }
  }

  return 0;
}