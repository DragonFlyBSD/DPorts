# New ports collection makefile for:	PostgreSQL-client
# Date created:				Wed Nov 2 00:13:57 CET 2005
# Whom:					Palle Girgensohn <girgen@FreeBSD.org>
#
# $FreeBSD: ports/databases/postgresql83-client/Makefile,v 1.7 2012/11/17 05:55:20 svnexp Exp $
#
# To depend on postgresql-client, set USE_PGSQL=yes.
# See Mk/bsd.databases.mk for more info

PORTNAME=	postgresql
PKGNAMESUFFIX=	-client
PORTEPOCH=	 1	

COMMENT=	PostgreSQL database (client)

MASTERDIR=	${.CURDIR}/../postgresql83-server

BUILD_DIRS=	config src/include src/interfaces \
		src/bin/pg_dump src/bin/psql src/bin/scripts src/bin/pg_config \
		doc src/makefiles
CLIENT_ONLY=	yes
USE_LDCONFIG=	yes

.include "${MASTERDIR}/Makefile"
