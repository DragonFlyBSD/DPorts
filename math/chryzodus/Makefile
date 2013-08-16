# New ports collection makefile for:	chryzodus
# Date created:		2005-07-09
# Whom:			Nicola Vitale <nivit@email.it>
#
# $FreeBSD: math/chryzodus/Makefile 323734 2013-07-26 16:04:47Z crees $
#

PORTNAME=	chryzodus
PORTVERSION=	0.32
DISTVERSIONSUFFIX=	-src
PORTREVISION=	2
CATEGORIES=	math
MASTER_SITES=	SF

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	A chryzode (http//www.chryzode.org) explorer

LIB_DEPENDS=	alleg:${PORTSDIR}/devel/allegro

WRKSRC=		${WRKDIR}/${PORTNAME}
MAKEFILE=	makefile.unx

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}

.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}; \
	${INSTALL_DATA} ${WRKSRC}/doc/* ${DOCSDIR}
.endif

.include <bsd.port.mk>
