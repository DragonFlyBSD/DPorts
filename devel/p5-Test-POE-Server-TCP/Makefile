# New ports collection makefile for:	Test-POE-Server-TCP
# Date created:				23 Feb 2009
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: devel/p5-Test-POE-Server-TCP/Makefile 324352 2013-08-07 13:20:32Z az $
#

PORTNAME=	Test-POE-Server-TCP
PORTVERSION=	1.16
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	A POE Component providing TCP server services for test cases

BUILD_DEPENDS=	p5-POE>=1.004:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Test::POE::Server::TCP.3

.include <bsd.port.mk>
