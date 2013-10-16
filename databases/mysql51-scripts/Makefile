# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: databases/mysql51-scripts/Makefile 329247 2013-10-03 23:18:52Z flo $

PORTNAME=	mysql
PKGNAMESUFFIX=	51-scripts

COMMENT=	Multithreaded SQL database (scripts)

MASTERDIR=	${.CURDIR}/../mysql51-server

PKGINSTALL=	mustnotexist
PKGMESSAGE=	mustnotexist
PLIST=		${PKGDIR}/pkg-plist.scripts

SCRIPTS_ONLY=	yes
USES=		perl5

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
