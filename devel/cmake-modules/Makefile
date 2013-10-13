# Created by: gahr
# $FreeBSD: devel/cmake-modules/Makefile 328700 2013-09-29 14:41:11Z rakuco $

PORTREVISION=	1
PKGNAMESUFFIX=	-modules
LATEST_LINK=	cmake-modules

COMMENT=	Modules and Templates for CMake

CMAKE_MODULES=	yes

NO_STAGE=	yes
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
