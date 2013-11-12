# Created by: chinsan
# $FreeBSD: www/p5-Tie-TinyURL/Makefile 333137 2013-11-07 16:38:13Z vanilla $

PORTNAME=	Tie-TinyURL
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Tied interface to TinyURL.com

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild
CONFIGURE_ARGS=	</dev/null

.include <bsd.port.mk>
