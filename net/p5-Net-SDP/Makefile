# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: net/p5-Net-SDP/Makefile 332868 2013-11-05 16:42:55Z vanilla $

PORTNAME=	Net-SDP
PORTVERSION=	0.07
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Session Description Protocol (RFC 2327) packet parser/generator

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
