# Created by: Pedro Giffuni <giffunip@asme.org>
# $FreeBSD: converters/vda2fbd/Makefile 327715 2013-09-20 16:05:24Z bapt $

PORTNAME=	vda2fbd
PORTVERSION=	1.0
CATEGORIES=	converters cad
MASTER_SITES=	http://www.dhondt.de/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An add-on converter for CalculiX

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/src

MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS}" YACC="${YACC}"

PORTDOCS=	model.ps.gz
PLIST_FILES=	bin/vda2fbd

NO_STAGE=	yes
post-build:
	cd ${WRKSRC}/../doc && ${GZIP_CMD} -c model.ps > model.ps.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/vda2fbd ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/../doc/model.ps.gz ${DOCSDIR}
.endif

.include <bsd.port.mk>
