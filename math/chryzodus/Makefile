# Created by: Nicola Vitale <nivit@email.it>
# $FreeBSD: math/chryzodus/Makefile 333455 2013-11-10 23:13:21Z nivit $

PORTNAME=	chryzodus
PORTVERSION=	0.32
DISTVERSIONSUFFIX=	-src
PORTREVISION=	2
CATEGORIES=	math
MASTER_SITES=	SF

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Chryzode (http//www.chryzode.org) explorer

LICENSE=	GPLv2

LIB_DEPENDS=	liballeg.so:${PORTSDIR}/devel/allegro

WRKSRC=		${WRKDIR}/${PORTNAME}
MAKEFILE=	makefile.unx

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC}/doc && \
	${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
