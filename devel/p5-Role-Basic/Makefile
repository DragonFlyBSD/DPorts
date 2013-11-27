# Created by: Matthew Seaman <matthew@FreeBSD.org>
# $FreeBSD: devel/p5-Role-Basic/Makefile 334982 2013-11-27 00:00:54Z matthew $

PORTNAME=	Role-Basic
PORTVERSION=	0.13
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:OVID

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Just roles. Nothing else

PKGNAMEPREFIX=	p5-

USES=		perl5
USE_PERL5=	configure

regression-test: build
	@cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
