# Created by: gahr
# $FreeBSD: devel/cmake-modules/Makefile 314670 2013-03-19 18:00:29Z makc $

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
