/*
 * This file is in the public domain.
 *
 * $FreeBSD: net/openntpd/files/adjfreq.c 300897 2012-07-14 14:29:18Z beat $
 */

#include <sys/types.h>
#include <sys/timex.h>

#include "ntpd.h"

int
adjfreq(const int64_t *freq, int64_t *oldfreq)
{
	struct timex t;

	if (oldfreq) {
		t.modes = 0;
		if (ntp_adjtime(&t) == -1)
			return -1;
		*oldfreq = (int64_t)t.freq * (1<<16) * 1000;
	}
	if (freq) {
		t.modes = MOD_FREQUENCY;
		t.freq = *freq / ((1<<16) * 1000);
		if (ntp_adjtime(&t) == -1)
			return -1;
	}
	return 0;
}
