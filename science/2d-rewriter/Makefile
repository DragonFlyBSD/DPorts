# New ports collection makefile for:    2d-rewriter
# Date created:                         8 December 2007
# Whom:                                 Igor Serikov <iserikov@acm.org>
#
# $FreeBSD: ports/science/2d-rewriter/Makefile,v 1.6 2012/11/17 06:00:56 svnexp Exp $
#

PORTNAME=	2d-rewriter
PORTVERSION=	1.4
CATEGORIES=	science
MASTER_SITES=	http://www.crowdeduniverse.org/distfiles/

MAINTAINER=	iserikov@acm.org
COMMENT=	Cellular automata simulator

MAN1=		2d-rewriter.1
MANCOMPRESSED=	yes
USE_IMAKE=	yes
USE_XORG=	x11 xext

.if !defined(NOPORTEXAMPLES)
post-install:
	${MKDIR} ${EXAMPLESDIR}
	(cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} \* ${EXAMPLESDIR})
.endif

.include <bsd.port.mk>
