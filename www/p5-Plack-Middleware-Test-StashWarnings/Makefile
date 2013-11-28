# Created by: Matthew Seaman <matthew@FreeBSD.org>
# $FreeBSD: www/p5-Plack-Middleware-Test-StashWarnings/Makefile 334984 2013-11-27 00:04:00Z matthew $

PORTNAME=	Plack-Middleware-Test-StashWarnings
PORTVERSION=	0.07
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Test your application's warnings

BUILD_DEPENDS=	p5-Plack>0:${PORTSDIR}/www/p5-Plack
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

regression-test: build
	@cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
