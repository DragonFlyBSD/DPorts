# New ports collection Makefile for:	cmake-modules
# Date created:				12 July 2012
# Whom:					gahr
#
# $FreeBSD: ports/devel/cmake-modules/Makefile,v 1.2 2012/11/17 05:55:38 svnexp Exp $
#
#

PORTREVISION=	0
PKGNAMESUFFIX=	-modules
LATEST_LINK=	cmake-modules

COMMENT=	Modules and Templates for CMake

CMAKE_MODULES=	yes

do-install:
	${MKDIR} ${DATADIR}/Modules
	${MKDIR} ${DATADIR}/Templates
	cd ${WRKSRC}/Modules && ${COPYTREE_SHARE} \* ${DATADIR}/Modules
	cd ${WRKSRC}/Templates && ${COPYTREE_SHARE} \* ${DATADIR}/Templates

NO_BUILD=	yes

PLIST=		${.CURDIR}/pkg-plist
DESCR=		${.CURDIR}/pkg-descr

MASTERDIR=	${.CURDIR}/../cmake
.include "${MASTERDIR}/Makefile"
