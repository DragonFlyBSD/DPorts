# $FreeBSD: ports/sysutils/bacula-client/Makefile,v 1.7 2012/12/16 16:36:39 svnexp Exp $

PORTNAME=	bacula
PKGNAMESUFFIX=	-client

COMMENT=	Network backup solution (client)

WITH_CLIENT_ONLY=yes
USE_RC_SUBR=	bacula-fd

PLIST=		${PKGDIR}/pkg-plist.client
MASTERDIR=	${.CURDIR}/../../sysutils/bacula-server

OPTIONS_DEFINE=	NLS OPENSSL
OPTIONS_DEFAULT=NLS OPENSSL

.include "${MASTERDIR}/Makefile"
