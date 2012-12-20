# New ports collection makefile for:	p5-DynaLoader-Functions
# Date created:		2012-02-07
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-DynaLoader-Functions/Makefile,v 1.4 2012/11/17 05:56:14 svnexp Exp $
#

PORTNAME=	DynaLoader-Functions
PORTVERSION=	0.001
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Deconstructed dynamic C library loading

TEST_DEPENDS=	p5-Test-Pod>=1:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage

PERL_CONFIGURE=	yes

MAN3=		DynaLoader::Functions.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501001
BUILD_DEPENDS+=	p5-parent>=0:${PORTSDIR}/devel/p5-parent
RUN_DEPENDS+=	p5-parent>=0:${PORTSDIR}/devel/p5-parent
.endif

.include <bsd.port.post.mk>
