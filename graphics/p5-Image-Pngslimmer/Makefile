# New ports collection makefile for:	p5-Image-Pngslimmer
# Date Created:				2007/02/12
# Whom:					chinsan
#
# $FreeBSD: ports/graphics/p5-Image-Pngslimmer/Makefile,v 1.22 2012/11/17 05:58:17 svnexp Exp $
#

PORTNAME=	Image-Pngslimmer
PORTVERSION=	0.30
PORTREVISION=	1
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Slims (dynamically created) PNGs

PERL_CONFIGURE=	yes

MAN3=		Image::Pngslimmer.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 500903
RUN_DEPENDS+=	p5-IO-Compress>=2.017:${PORTSDIR}/archivers/p5-IO-Compress
BUILD_DEPENDS+=	p5-IO-Compress>=2.017:${PORTSDIR}/archivers/p5-IO-Compress
.endif

.include <bsd.port.post.mk>
