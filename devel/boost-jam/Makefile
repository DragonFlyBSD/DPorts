# Created by: Alexander Churanov <churanov.port.maintainer@gmail.com>
# $FreeBSD: devel/boost-jam/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	boost-jam
COMMENT=	Build tool from the boost.org

PORTREVISION=	1

PLIST_FILES=	bin/bjam

EXTRACT_AFTER_ARGS=	${DISTNAME}/tools/build/v2/engine

NO_STAGE=	yes
.include "${.CURDIR}/../boost-all/common.mk"

do-build:
	cd ${WRKSRC}/tools/build/v2/engine && \
		${MAKE_ENV} ./build.sh ${CC}

do-install:
	${MKDIR} ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/tools/build/v2/engine/bin.*/bjam \
		${PREFIX}/bin/

.include <bsd.port.mk>
