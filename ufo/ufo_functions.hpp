#include <vector>
#include <string>
using namespace std;

void display_misses(int misses);
void greet();
void end_game(std::string answer, std::string codeword);
void display_status(std::vector<char> incorrect, std::string answer);
std::string select_codeword(std::vector<std::string> codewords);
