# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: devel/p5-Test-POE-Server-TCP/Makefile 327724 2013-09-20 17:13:42Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
