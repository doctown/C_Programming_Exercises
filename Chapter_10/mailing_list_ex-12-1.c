/*********************************************************/
/* Sets up a mailing list struct and print out the data. */
/* 							 */
/* Author: David					 */
/* Date: 08-22-2015					 */
/*********************************************************/
#include <stdio.h>

struct mailing_list {
  short st_num;
  char *street;
  char city[10];
  char state[3];
  int zip_code;
} mail[3] = {
  {100, "Corn blvd", "Raleigh", "NC", 27513},
  {12, "One st", "Austin", "TX", 78752},
  {1, "Main st", "WPB", "FL", 33411}
};

int main(int argc, char *argv[])
{
  int i = 0;

  for ( i = 0; i < sizeof(mail) / sizeof(struct mailing_list); ++i) {
    printf("%3hd %s %s, %s %d\n", mail[i].st_num, mail[i].street, mail[i].city, mail[i].state, mail[i].zip_code);
  }

  return 0;
}
