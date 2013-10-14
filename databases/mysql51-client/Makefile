# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: databases/mysql51-client/Makefile 329247 2013-10-03 23:18:52Z flo $

PORTNAME=	mysql
PKGNAMESUFFIX=	51-client

COMMENT=	Multithreaded SQL database (client)

MASTERDIR=	${.CURDIR}/../mysql51-server

PKGINSTALL=	mustnotexist
PKGMESSAGE=	mustnotexist
PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
