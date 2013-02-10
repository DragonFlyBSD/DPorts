# Created by: Alexander Churanov <churanov.port.maintainer@gmail.com>
# $FreeBSD: ports/devel/boost-jam/Makefile,v 1.7 2013/02/08 11:14:41 svnexp Exp $

PORTNAME=	boost-jam
COMMENT=	Build tool from the boost.org

PORTREVISION=	1

PLIST_FILES=	bin/bjam

.include "${.CURDIR}/../boost-all/common.mk"

do-build:
	cd ${WRKSRC}/tools/build/v2/engine && \
		${MAKE_ENV} ./build.sh ${CC}

do-install:
	${MKDIR} ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/tools/build/v2/engine/bin.*/bjam \
		${PREFIX}/bin/

.include <bsd.port.mk>
