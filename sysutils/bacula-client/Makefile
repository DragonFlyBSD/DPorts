# $FreeBSD: sysutils/bacula-client/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	bacula
PKGNAMESUFFIX=	-client

COMMENT=	Network backup solution (client)

WITH_CLIENT_ONLY=yes
USE_RC_SUBR=	bacula-fd

PLIST=		${PKGDIR}/pkg-plist.client
MASTERDIR=	${.CURDIR}/../../sysutils/bacula-server

OPTIONS_DEFINE=	NLS OPENSSL PYTHON
OPTIONS_DEFAULT=NLS OPENSSL

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
