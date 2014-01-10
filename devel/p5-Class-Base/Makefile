# Created by: Lars Thegler <lars@thegler.dk>
# $FreeBSD: devel/p5-Class-Base/Makefile 338880 2014-01-06 13:53:21Z az $

PORTNAME=	Class-Base
PORTVERSION=	0.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Useful base class for deriving other modules

USES=		perl5
USE_PERL5=	configure

regression-test: build
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} test

.include <bsd.port.mk>
