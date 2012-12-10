/* $FreeBSD: ports/www/man2web/files/freebsd.h,v 1.2 2012/11/17 06:02:39 svnexp Exp $ */

/* default section entries that are used if configuration file is disabled*/
#define SECTION_COUNT 9
struct section_entry section_matrix[] = {
	{ "1", "1",	"General Commands (Tools and Utilities)" },
	{ "2", "2",     "System Calls and Error Numbers" },
	{ "3", "3",     "C Libraries" },
	{ "4", "4",     "Devices and Device Drivers" },
	{ "5", "5",     "File Formats" },
	{ "6", "6",     "Games" },
	{ "7", "7",     "Miscellaneous Information Pages" },
	{ "8", "8",     "System Maintenance and Operation Commands" },
	{ "9", "9",     "Kernel Interfaces" }
};

