# Created by: glarkin
# $FreeBSD: devel/p5-MooseX-StrictConstructor/Makefile 341431 2014-01-27 16:58:15Z miwi $

PORTNAME=	MooseX-StrictConstructor
PORTVERSION=	0.19
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Make your MooseX object constructors blow up on unknown attributes

BUILD_DEPENDS=	p5-Moose>=0.94:${PORTSDIR}/devel/p5-Moose \
		p5-namespace-autoclean>=0:${PORTSDIR}/devel/p5-namespace-autoclean
RUN_DEPENDS=	p5-Moose>=0.94:${PORTSDIR}/devel/p5-Moose \
		p5-namespace-autoclean>=0:${PORTSDIR}/devel/p5-namespace-autoclean

TEST_DEPENDS=	p5-Test-Fatal>=0:${PORTSDIR}/devel/p5-Test-Fatal

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
