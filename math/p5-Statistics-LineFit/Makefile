# New ports collection makefile for:	p5-Statistics-LineFit
# Date created:		2006-10-23
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/math/p5-Statistics-LineFit/Makefile,v 1.4 2012/11/17 05:59:28 svnexp Exp $
#

PORTNAME=	Statistics-LineFit
PORTVERSION=	0.07
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Statistics
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Least squares line fit, weighted or unweighted

PERL_CONFIGURE=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}

MAN3=		Statistics::LineFit.3

post-extract:
	${CHMOD} 755 ${WRKSRC}

.include <bsd.port.mk>
