# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: math/p5-Math-BaseCnv/Makefile 327033 2013-09-12 06:03:58Z az $

PORTNAME=	Math-BaseCnv
PORTVERSION=	1.4.75
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION}O6Pbr
EXTRACT_SUFX=	.tgz

MAINTAINER=	wenheping@gmail.com
COMMENT=	Fast functions to convert between number Bases

BUILD_DEPENDS=	p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage
RUN_DEPENDS=	p5-Memoize>=0:${PORTSDIR}/devel/p5-Memoize

USES=		perl5
USE_PERL5=	configure

MAN3=		Math::BaseCnv.3

.include <bsd.port.mk>
