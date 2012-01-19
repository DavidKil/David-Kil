int main ()
{
  time_t rawtime;
  struct tm * timeinfo;
  int year, month ,day,year2, month2,day2;
  char * weekday[] = { "Sunday", "Monday",
                       "Tuesday", "Wednesday",
                       "Thursday", "Friday", "Saturday"};

  /* prompt user for date */
  printf ("Enter year: "); scanf ("%d",&year);
  printf ("Enter month: "); scanf ("%d",&month);
  printf ("Enter day: "); scanf ("%d",&day);
  printf ("Enter year: "); scanf ("%d",&year2);
  printf ("Enter month: "); scanf ("%d",&month2);
  printf ("Enter day: "); scanf ("%d",&day2);

  /* get current timeinfo and modify it to the user's choice */
  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  timeinfo->tm_year = year - 1900;
  timeinfo->tm_mon = month - 1;
  timeinfo->tm_mday = day;

  /* call mktime: timeinfo->tm_wday will be set */
  mktime ( timeinfo );

  printf ("That day is a %s.\n", weekday[timeinfo->tm_wday]);
  
  return 0;
}