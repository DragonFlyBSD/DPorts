# Created by: Matthew Seaman <matthew@FreeBSD.org>
# $FreeBSD: devel/p5-Role-Basic/Makefile 335634 2013-12-04 20:58:09Z matthew $

PORTNAME=	Role-Basic
PORTVERSION=	0.13
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:OVID
PKGNAMEPREFIX=	p5-

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Just roles. Nothing else

PORTSCOUT=	limit:^0\.[1-9]

USES=		perl5
USE_PERL5=	configure

regression-test: build
	@cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
