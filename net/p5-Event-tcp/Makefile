# Created by: steinex
# $FreeBSD: net/p5-Event-tcp/Makefile 332868 2013-11-05 16:42:55Z vanilla $

PORTNAME=	Event-tcp
PORTVERSION=	0.14
CATEGORIES=	net devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Glue code to build client-server style TCP-based services

BUILD_DEPENDS=	p5-Event>=0:${PORTSDIR}/devel/p5-Event \
		p5-Ioctl>=0:${PORTSDIR}/devel/p5-Ioctl
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
