# Created by: vanilla@
# $FreeBSD: security/p5-CryptX/Makefile 331466 2013-10-24 08:34:29Z vanilla $

PORTNAME=	CryptX
PORTVERSION=	0.019
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Crypt
PKGNAMEPREFIX=	p5-

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Crypto toolkit

USES=		perl5
USE_PERL5=	modbuild

regression-test: build
	@cd ${WRKSRC}/ && ${SETENV} ${MAKE_ENV} ${PERL5} ${PL_BUILD} ${MAKE_ARGS} test

.include <bsd.port.mk>
