# Created by: Palle Girgensohn <girgen@FreeBSD.org>
# $FreeBSD: databases/postgresql93-client/Makefile 321954 2013-06-28 10:50:51Z girgen $
#
# To depend on postgresql-client, set USE_PGSQL=yes.
# See Mk/bsd.databases.mk for more info

PORTNAME=	postgresql
PKGNAMESUFFIX=	-client

COMMENT=	PostgreSQL database (client)

MASTERDIR=	${.CURDIR}/../postgresql93-server

BUILD_DIRS=	config src/include src/interfaces src/port \
		src/bin/pg_dump src/bin/psql src/bin/scripts src/bin/pg_config \
		doc src/makefiles
INSTALL_DIRS=	${BUILD_DIRS}

CLIENT_ONLY=	yes
USE_LDCONFIG=	yes
USES=		pkgconfig

.include "${MASTERDIR}/Makefile"
