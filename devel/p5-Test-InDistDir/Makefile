# New ports collection makefile for:	devel/p5-Test-InDistDir
# Date created:				05 October 2011
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Test-InDistDir/Makefile,v 1.4 2012/11/17 05:56:32 svnexp Exp $
#

PORTNAME=	Test-InDistDir
PORTVERSION=	1.112071
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Test
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Test environment setup for development with IDE

PERL_CONFIGURE=	yes

MAN3=	Test::InDistDir.3

regression-test: build
	cd ${WRKSRC}/ && ${MAKE} test

.include <bsd.port.mk>
