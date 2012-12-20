# New ports collection makefile for:	archivers/p5-Archive-Peek
# Date created:				01 September 2011
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/archivers/p5-Archive-Peek/Makefile,v 1.5 2012/11/17 05:54:21 svnexp Exp $
#

PORTNAME=	Archive-Peek
PORTVERSION=	0.35
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Peek into archives without extracting them

BUILD_DEPENDS=	p5-Archive-Tar>=0:${PORTSDIR}/archivers/p5-Archive-Tar \
		p5-Archive-Zip>=0:${PORTSDIR}/archivers/p5-Archive-Zip \
		p5-Moose>=0:${PORTSDIR}/devel/p5-Moose \
		p5-MooseX-Types-Path-Class>=0:${PORTSDIR}/devel/p5-MooseX-Types-Path-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}

TEST_DEPENDS=	p5-Test-Pod>=1.14:${PORTSDIR}/devel/p5-Test-Pod

PERL_CONFIGURE=	yes

MAN3=		Archive::Peek.3

regression-test: build
	cd ${WRKSRC}/ && ${MAKE} test

.include <bsd.port.mk>
