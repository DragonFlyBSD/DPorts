# Created by: Max Khon <fjoe@FreeBSD.org>
# $FreeBSD: databases/mysql2odbc/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mysql2odbc
PORTVERSION=	0.99.2
PORTREVISION=	4
CATEGORIES=	databases
MASTER_SITES=	http://www.iodbc.org/downloads/mysql2odbc/

MAINTAINER=	fjoe@FreeBSD.org
COMMENT=	Openlink MySQL-ODBC Gateway

OPTIONS_SINGLE=	ODBC
OPTIONS_SINGLE_ODBC=	UNIXODBC IODBC
OPTIONS_DEFAULT=	UNIXODBC

NO_STAGE=	yes
.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MUNIXODBC}
LIB_DEPENDS=	libodbc.so:${PORTSDIR}/databases/unixODBC
CONFIGURE_ARGS=	--with-unixodbc=${LOCALBASE}
.endif

.if ${PORT_OPTIONS:MIODBC}
LIB_DEPENDS=	libiodbc.so:${PORTSDIR}/databases/libiodbc
CONFIGURE_ARGS=	--with-iodbc
.endif

CONFIGURE_ARGS+=--libdir=${PREFIX}/mysql2odbc
CPPFLAGS+=	${PTHREAD_CFLAGS}
LDFLAGS+=	${PTHREAD_LIBS}

USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes

.include <bsd.port.mk>
