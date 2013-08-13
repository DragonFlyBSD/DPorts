# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: net/p5-Net-NBsocket/Makefile 324174 2013-08-02 18:52:07Z mat $

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

MAN3=		Net::NBsocket.3

.include <bsd.port.mk>
