#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
  int t;
  scanf("%d", &t); 
  for(int i = 0; i < t; ++i){
    char ticket[7];
    scanf("%s", ticket);
    int sum_first_three = 0, sum_last_three = 0;
    for(int j = 0; j < 3; ++j){
      sum_first_three += ticket[j] - '0';
    }
    for (int j = 3; j < 6; ++j){
      sum_last_three += ticket[j] - '0';
    }
    if(sum_first_three == sum_last_three) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}