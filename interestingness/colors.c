#include <stdio.h>
#include <stdlib.h>

int main() {

  // сначала текст текста, потом фона
  printf("\033[9;31;40mКрасный; зачеркнутый; черный фон\033[0m");
  printf("\n");
  printf("\033[1;37;42mБелый; полужирный; зеленый фон\033[0m");
  printf("\n");
  printf("\033[4;34;43mСиний; подчеркнутый; желтый фон\033[0m");
  printf("\n");
  printf("\033[9;32;47mЗеленый; зачеркнутый; белый фон\033[0m");
  printf("\n");
  printf("\033[4;33;44mЖелтый; подчеркнутый; синий фон\033[0m");
  printf("\n");
  printf("\033[1;30;41mЧерный; полужирный; красный фон\033[0m");
  printf("\n");
  return 0;


}