# New ports collection makefile for:	devel/p5-Test-ClassAPI
# Date created:				24 March 2005
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Test-ClassAPI/Makefile,v 1.7 2012/11/17 05:56:31 svnexp Exp $
#

PORTNAME=	Test-ClassAPI
PORTVERSION=	1.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Provides basic first-pass API testing for large class trees

RUN_DEPENDS=	p5-Class-Inspector>=1.12:${PORTSDIR}/devel/p5-Class-Inspector \
		p5-Config-Tiny>=2.00:${PORTSDIR}/devel/p5-Config-Tiny \
		p5-Params-Util>=1.00:${PORTSDIR}/devel/p5-Params-Util
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Test::ClassAPI.3

.include <bsd.port.mk>
