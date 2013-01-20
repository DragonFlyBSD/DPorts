#
# $FreeBSD: ports/www/mod_auth_mysql_another/files/Makefile,v 1.2 2012/11/17 06:02:40 svnexp Exp $
#
all: build

build:
	%%APXS%% -c -L%%AP_LIB%% -I%%AP_INC%% -lmysqlclient -lm -lz mod_auth_mysql.c

install:
	%%APXS%% -i mod_auth_mysql.so
