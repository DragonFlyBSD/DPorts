# Created by: Rong-En Fan <rafan@FreeBSD.org>
# $FreeBSD: devel/p5-parent/Makefile 326703 2013-09-08 06:18:53Z az $

PORTNAME=	parent
PORTVERSION=	0.225
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CORION
PKGNAMEPREFIX=	p5-

MAINTAINER=	rafan@FreeBSD.org
COMMENT=	Establish an ISA relationship with base classes at compile time

USES=		perl5
USE_PERL5=	configure

MAN3=		parent.3

regression-test:
	cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
