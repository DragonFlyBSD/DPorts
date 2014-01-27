# Created by: Romain Tartiere <romain@FreeBSD.org>
# $FreeBSD: graphics/ppsei/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ppsei
PORTVERSION=	0.3
CATEGORIES=	graphics
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}-${PORTVERSION}.src
EXTRACT_SUFX=	.tgz

MAINTAINER=	romain@FreeBSD.org
COMMENT=	PowerPoint images extractor

PLIST_FILES=	bin/${PORTNAME}
WRKSRC=		${WRKDIR}/${PORTNAME}

NO_STAGE=	yes
do-build:
	@(cd ${WRKSRC} && ${CC} ${CFLAGS} -o ${PORTNAME} ${PORTNAME}.c)

do-install:
	@(cd ${WRKSRC} && ${INSTALL_PROGRAM} ${PORTNAME} ${PREFIX}/bin)

.include <bsd.port.mk>
