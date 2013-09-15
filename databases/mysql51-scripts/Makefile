# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: databases/mysql51-scripts/Makefile 326894 2013-09-10 11:32:20Z az $

PORTNAME=	mysql
PKGNAMESUFFIX=	-scripts

COMMENT=	Multithreaded SQL database (scripts)

MASTERDIR=	${.CURDIR}/../mysql51-server

PKGINSTALL=	mustnotexist
PKGMESSAGE=	mustnotexist
PLIST=		${PKGDIR}/pkg-plist.scripts

SCRIPTS_ONLY=	yes
USES=		perl5

.include "${MASTERDIR}/Makefile"
