# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: audio/alac/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	alac
PORTVERSION=	0.2.0
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://craz.net/programs/itunes/files/
DISTNAME=	${PORTNAME}_decoder-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Basic decoder for Apple Lossless Audio Codec files (ALAC)

WRKSRC=		${WRKDIR}/${PORTNAME}_decoder
MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS}"
ALL_TARGET=	alac

OPTIONS_DEFINE=	DOCS

PLIST_FILES=	bin/alac
PORTDOCS=	README

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/alac ${STAGEDIR}${PREFIX}/bin/
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
