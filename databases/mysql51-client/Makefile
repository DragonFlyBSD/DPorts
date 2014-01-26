# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: databases/mysql51-client/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mysql
PKGNAMESUFFIX=	51-client

COMMENT=	Multithreaded SQL database (client)

MASTERDIR=	${.CURDIR}/../mysql51-server

PKGINSTALL=	mustnotexist
PKGMESSAGE=	mustnotexist
PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

.include "${MASTERDIR}/Makefile"
