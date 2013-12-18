# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: databases/mysql51-scripts/Makefile 336733 2013-12-17 15:00:17Z ale $

PORTNAME=	mysql
PKGNAMESUFFIX=	51-scripts

COMMENT=	Multithreaded SQL database (scripts)

MASTERDIR=	${.CURDIR}/../mysql51-server

PKGINSTALL=	mustnotexist
PKGMESSAGE=	mustnotexist
PLIST=		${PKGDIR}/pkg-plist.scripts

SCRIPTS_ONLY=	yes
USES=		perl5

.include "${MASTERDIR}/Makefile"
