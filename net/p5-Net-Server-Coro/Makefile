# $FreeBSD: net/p5-Net-Server-Coro/Makefile 327755 2013-09-20 22:10:23Z bapt $

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

MAN3=	Net::Server::Coro.3

NO_STAGE=	yes
.include <bsd.port.mk>
