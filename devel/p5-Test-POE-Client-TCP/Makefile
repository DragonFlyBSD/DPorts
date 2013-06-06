# $FreeBSD: devel/p5-Test-POE-Client-TCP/Makefile 318370 2013-05-17 09:40:43Z lth $

PORTNAME=	Test-POE-Client-TCP
PORTVERSION=	1.12
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	A POE Component providing TCP client services for test cases

BUILD_DEPENDS=	p5-POE>=1.28:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Test::POE::Client::TCP.3

.include <bsd.port.mk>
