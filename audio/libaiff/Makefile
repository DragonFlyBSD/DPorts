# New ports collection makefile for:	libaiff
# Date created:		14 September 2006
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/audio/libaiff/Makefile,v 1.9 2012/11/17 05:54:35 svnexp Exp $
#

PORTNAME=	libaiff
PORTVERSION=	5.0
CATEGORIES=	audio
MASTER_SITES=	SF/aifftools/${PORTNAME}/LibAiff%20${PORTVERSION}
DISTNAME=	libaiff-5.0-release

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Read and write AIFF files

GNU_CONFIGURE=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

PLIST_FILES=	lib/${PORTNAME}.a include/${PORTNAME}/config.h include/${PORTNAME}/endian.h \
		include/${PORTNAME}/${PORTNAME}.h include/${PORTNAME}/config.vc.h
PLIST_DIRS=	include/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e 's/install: libaiff.a/install:/' \
	${WRKSRC}/${MAKEFILE}.in

.include <bsd.port.mk>
