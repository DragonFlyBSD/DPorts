# $FreeBSD: devel/p5-Test-Mock-Guard/Makefile 326644 2013-09-07 15:51:29Z az $

PORTNAME=	Test-Mock-Guard
PORTVERSION=	0.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for simple mock test library using RAII

BUILD_DEPENDS=	p5-Class-Load>=0.06:${PORTSDIR}/devel/p5-Class-Load
RUN_DEPENDS=	p5-Class-Load>=0.06:${PORTSDIR}/devel/p5-Class-Load

USES=		perl5
USE_PERL5=	configure

MAN3=	Test::Mock::Guard.3

.include <bsd.port.mk>
