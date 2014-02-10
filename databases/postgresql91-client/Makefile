# Created by: Palle Girgensohn <girgen@FreeBSD.org>
# $FreeBSD: head/databases/postgresql91-client/Makefile 330414 2013-10-15 17:17:05Z sunpoet $

PORTNAME=	postgresql
PKGNAMESUFFIX?=	${DISTVERSION:R:S/.//}${COMPONENT}

COMMENT=	PostgreSQL database (client)

MASTERDIR=	${.CURDIR}/../postgresql91-server

BUILD_DIRS=	config src/include src/interfaces src/port \
		src/bin/pg_dump src/bin/psql src/bin/scripts src/bin/pg_config \
		doc src/makefiles
INSTALL_DIRS=	${BUILD_DIRS}

CLIENT_ONLY=	yes
COMPONENT=	-client
USE_LDCONFIG=	yes

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
