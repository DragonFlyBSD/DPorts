#
# $FreeBSD: www/mod_auth_mysql_another/files/Makefile 340722 2014-01-22 17:00:46Z mat $
#
all: build

build:
	%%APXS%% -c -L%%AP_LIB%% -I%%AP_INC%% -lmysqlclient -lm -lz mod_auth_mysql.c

install:
	%%APXS%% -i mod_auth_mysql.so
