#include <stdlib.h>

/* Run "cmake -G "Unix Makefiles" CMakeLists.txt"
   and then "make" to build the executable */
   
#include "BattleField.h"

int main() {
  BattleField battleField;

  createPlayers(&battleField);
  buyPistols(&battleField);
  startBattle(&battleField);

  return EXIT_SUCCESS;
}
