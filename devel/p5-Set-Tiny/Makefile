# Created by: Matthew Seaman <matthew@FreeBSD.org>
# $FreeBSD: devel/p5-Set-Tiny/Makefile 336102 2013-12-10 19:47:42Z bdrewery $

PORTNAME=	Set-Tiny
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Simple sets of strings

NO_ARCH=	yes

USES=		perl5
USE_PERL5=	configure

regression-test: build
	@cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
