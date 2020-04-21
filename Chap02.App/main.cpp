#include <stdio.h>
#include "Time.h"
#include "Date.h"

int main() {
	Date d;
	d.SetDate(2020, 04, 21);
	d.OutDate();
	printf("Size of Date = %d\n", sizeof(d));

	Time now;
	now.SetTime(15, 54, 12);
	now.OutTime();
	printf("Size of Time = %d\n", sizeof(now));

	return 0;
}