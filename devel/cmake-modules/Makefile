# Created by: gahr
# $FreeBSD: devel/cmake-modules/Makefile 331379 2013-10-23 12:17:50Z gahr $

PORTREVISION=	1
PKGNAMESUFFIX=	-modules

COMMENT=	Modules and Templates for CMake

CMAKE_MODULES=	yes

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/Modules
	${MKDIR} ${STAGEDIR}${DATADIR}/Templates
	cd ${WRKSRC}/Modules && ${COPYTREE_SHARE} \* ${STAGEDIR}${DATADIR}/Modules
	cd ${WRKSRC}/Templates && ${COPYTREE_SHARE} \* ${STAGEDIR}${DATADIR}/Templates

NO_BUILD=	yes

PLIST=		${.CURDIR}/pkg-plist
DESCR=		${.CURDIR}/pkg-descr

MASTERDIR=	${.CURDIR}/../cmake
.include "${MASTERDIR}/Makefile"
