# Created by: vanilla@
# $FreeBSD: security/p5-CryptX/Makefile 331011 2013-10-20 12:46:44Z vanilla $

PORTNAME=	CryptX
PORTVERSION=	0.018
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
