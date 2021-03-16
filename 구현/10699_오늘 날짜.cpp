//현재 날짜 출력
#include <iostream>
#include <time.h>
using namespace std;

int main() {
	time_t timer;
	struct tm *t;

	timer = time(NULL);//현재 시각을 초 단위로 구함
	t = localtime(&timer);//초 단위의 시간을 분리하여 구조체에 넣기

	printf("%04d-%02d-%02d", (t->tm_year + 1900), t->tm_mon + 1, t->tm_mday);

	return 0;
}

// time.h의 시간구조체
// struct tm {
//   int tm_sec;   /* Seconds */
//   int tm_min;   /* Minutes */
//   int tm_hour;  /* Hour (0--23) */
//   int tm_mday;  /* Day of month (1--31) */
//   int tm_mon;   /* Month (0--11) */
//   int tm_year;  /* Year (calendar year minus 1900) */
//   int tm_wday;  /* Weekday (0--6; Sunday = 0) */
//   int tm_yday;  /* Day of year (0--365) */
//   int tm_isdst; /* 0 if daylight savings time is not in effect) */
// };