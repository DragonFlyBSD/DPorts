# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: net/p5-Net-NBsocket/Makefile 332868 2013-11-05 16:42:55Z vanilla $

PORTNAME=	Net-NBsocket
PORTVERSION=	0.23
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Non-Blocking Sockets

BUILD_DEPENDS=	p5-NetAddr-IP>0:${PORTSDIR}/net-mgmt/p5-NetAddr-IP
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
