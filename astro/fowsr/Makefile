# Created by: Alexander Leidinger
# $FreeBSD: astro/fowsr/Makefile 340340 2014-01-19 18:56:23Z bapt $

PORTNAME=	fowsr
PORTVERSION=	${FILEVER}.${FILEDATE}
CATEGORIES=	astro
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	fowsr-${FILEVER}-${FILEDATE}

MAINTAINER=	netchild@FreeBSD.org
COMMENT=	Fine Offset Weather Station Reader

LICENSE=	GPLv3

FILEVER=	1.0
FILEDATE=	20100718
WRKSRC=		${WRKDIR}/${PORTNAME}-${FILEVER}

USES=		gmake dos2unix

PLIST_FILES=	bin/fowsr

post-patch:
	${REINPLACE_CMD} 's:gcc:${CC}:g' ${WRKSRC}/Makefile
	${REINPLACE_CMD} 's:/usr/bin/fowsr:fowsr:g ; s://var//://var/tmp//:g' \
	    ${WRKSRC}/*.sh ${WRKSRC}/fowsr.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/fowsr ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
