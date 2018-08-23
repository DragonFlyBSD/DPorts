# Created by: Alexander Churanov <churanov.port.maintainer@gmail.com>
# $FreeBSD: head/devel/boost-jam/Makefile 467711 2018-04-18 13:57:42Z jbeich $

PORTNAME=	boost-jam
COMMENT=	Build tool from the boost.org

PLIST_FILES=	bin/bjam

EXTRACT_AFTER_ARGS=	${DISTNAME}/${WRKSRC_SUBDIR}
MAKE_CMD=	./build.sh
ALL_TARGET=	cc ${WITH_DEBUG:D--debug}
MAKE_FLAGS=	#
_MAKE_JOBS=	#
MAKEFILE=	#

WRKSRC_SUBDIR=	tools/build/src/engine

.include "${.CURDIR}/../boost-all/common.mk"

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/bin.*/bjam \
		${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
