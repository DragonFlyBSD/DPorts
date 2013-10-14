# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: audio/libaiff/Makefile 327706 2013-09-20 14:36:35Z bapt $

PORTNAME=	libaiff
PORTVERSION=	5.0
CATEGORIES=	audio
MASTER_SITES=	SF/aifftools/${PORTNAME}/LibAiff%20${PORTVERSION}
DISTNAME=	libaiff-5.0-release

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Read and write AIFF files

GNU_CONFIGURE=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
NO_STAGE=	yes

PLIST_FILES=	lib/${PORTNAME}.a include/${PORTNAME}/config.h include/${PORTNAME}/endian.h \
		include/${PORTNAME}/${PORTNAME}.h include/${PORTNAME}/config.vc.h
PLIST_DIRS=	include/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e 's/install: libaiff.a/install:/' \
	${WRKSRC}/${MAKEFILE}.in

.include <bsd.port.mk>
