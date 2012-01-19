#include <stdio.h>
#include <time.h>

int main()
{
  char date[11] = {0};

  printf("Input the harvest date in the following format YYYY/MM/DD: ");
  fgets(date, sizeof(date), stdin);

  struct tm tm_struct;

  strptime(date, "%Y/%m/%d", &tm_struct);

#ifdef DEBUG
  printf("year  = %d\n", tm_struct.tm_year);
  printf("month = %d\n", tm_struct.tm_mon);
  printf("day   = %d\n", tm_struct.tm_mday);
#endif

  time_t harvest = mktime(&tm_struct);
  time_t diff    = difftime(harvest, time(0));

#ifdef DEBUG
  printf("diff = %d\n", (int)diff);
#endif

  const unsigned int SECS_PER_DAY = 60 * 60 * 24;
  const unsigned int SECS_PER_HR  = 60 * 60;
  const unsigned int SECS_PER_MIN = 60;

  unsigned int days  = diff / SECS_PER_DAY;
  diff = diff % SECS_PER_DAY;
  unsigned int hours = diff / SECS_PER_HR;
  diff = diff % SECS_PER_HR;
  unsigned int minutes = diff / SECS_PER_MIN;
  diff = diff % SECS_PER_MIN;
  unsigned int seconds = diff;

  printf("Time till harvest:  %d days, %02d hours, %02d minutes, and %02d seconds.\n", days, hours, minutes, seconds);

  return 0;
}  