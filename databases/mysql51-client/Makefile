# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: databases/mysql51-client/Makefile 336733 2013-12-17 15:00:17Z ale $

PORTNAME=	mysql
PKGNAMESUFFIX=	51-client

COMMENT=	Multithreaded SQL database (client)

MASTERDIR=	${.CURDIR}/../mysql51-server

PKGINSTALL=	mustnotexist
PKGMESSAGE=	mustnotexist
PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

.include "${MASTERDIR}/Makefile"
