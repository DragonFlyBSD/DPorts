#
# $FreeBSD: www/mod_auth_mysql_another/files/Makefile 300897 2012-07-14 14:29:18Z beat $
#
all: build

build:
	%%APXS%% -c -L%%AP_LIB%% -I%%AP_INC%% -lmysqlclient -lm -lz mod_auth_mysql.c

install:
	%%APXS%% -i mod_auth_mysql.so
