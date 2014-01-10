# Created by: Rong-En Fan <rafan@FreeBSD.org>
# $FreeBSD: devel/p5-parent/Makefile 338880 2014-01-06 13:53:21Z az $

PORTNAME=	parent
PORTVERSION=	0.228
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CORION
PKGNAMEPREFIX=	p5-

MAINTAINER=	rafan@FreeBSD.org
COMMENT=	Establish an ISA relationship with base classes at compile time

USES=		perl5
USE_PERL5=	configure

regression-test:
	cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
