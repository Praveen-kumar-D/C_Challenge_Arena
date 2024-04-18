#include "Meetup.h"
#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
enum weekday { SUN = 0, MON, TUE, WED, THU, FRI, SAT };
static enum weekday weekday_from_str(const char *str)
{
    if (!strcmp(str, "Monday")) return MON;
    if (!strcmp(str, "Tuesday")) return TUE;
    if (!strcmp(str, "Wednesday")) return WED;
    if (!strcmp(str, "Thursday")) return THU;
    if (!strcmp(str, "Friday")) return FRI;
    if (!strcmp(str, "Saturday")) return SAT;
    if (!strcmp(str, "Sunday")) return SUN;
    assert(!"invalid weekday string");
}
static int32_t civil_to_days(int32_t year, int32_t month, int32_t day)
{
    year -= month <= 2;
    const int32_t era = (year >= 0 ? year : year - 399) / 400;
    const int32_t yoe = year - era * 400;
    const int32_t doy = (153 * (month + (month > 2? -3 : 9)) + 2) / 5 + day - 1;
    const int32_t doe = yoe * 365 + yoe / 4 - yoe / 100 + doy;
    return era * 146097 + doe - 719468;
}
static enum weekday days_to_weekday(int32_t days)
{
    return days >= -4? (days + 4) % 7 : (days + 5) % 7 + 6;
}

static bool is_leap_year(int32_t year)
{
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

static int days_in_month(int32_t year, int month)
{
    const int days[] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return month != 2 || !is_leap_year(year)? days[month]: 29;
}

static int next_weekday(enum weekday now, enum weekday target)
{
    return target >= now? target - now : 7 + target - now;
}

static int first_possible_day_of_month(int32_t year, int month, const char* week)
{
    if (!strcmp(week, "first"))  return 1;
    if (!strcmp(week, "second")) return 8;
    if (!strcmp(week, "third"))  return 15;
    if (!strcmp(week, "fourth")) return 22;
    if (!strcmp(week, "fifth"))  return 29;
    if (!strcmp(week, "teenth")) return 13;
    if (!strcmp(week, "last"))   return days_in_month(year, month) - 6;
    assert(!"invalid week string");
}

int meetup_day_of_month(
    int year, int month, const char *week, const char *weekday_str)
{
    assert(1 <= month && month <= 12);
    assert(week);
    assert(weekday_str);

    const int first_possible = first_possible_day_of_month(year, month, week);
    int day_of_month = first_possible + next_weekday(
        days_to_weekday(civil_to_days(year, month, first_possible)),
        weekday_from_str(weekday_str));
  printf("%d/%d/%d",year,month,day_of_month);
}
int main()
{
    meetup_day_of_month(2020,1,"first","Monday");
}
