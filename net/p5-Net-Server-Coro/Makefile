# $FreeBSD: net/p5-Net-Server-Coro/Makefile 338813 2014-01-05 18:05:39Z az $

PORTNAME=	Net-Server-Coro
PORTVERSION=	1.3
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for co-operative multithreaded server using Coro

RUN_DEPENDS=	\
	p5-AnyEvent>0:${PORTSDIR}/devel/p5-AnyEvent \
	p5-Coro>0:${PORTSDIR}/devel/p5-Coro \
	p5-Net-Server>=2:${PORTSDIR}/net/p5-Net-Server
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
