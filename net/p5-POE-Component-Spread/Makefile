# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: net/p5-POE-Component-Spread/Makefile 332868 2013-11-05 16:42:55Z vanilla $

PORTNAME=	POE-Component-Spread
PORTVERSION=	0.02
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Handle Spread communications in POE

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		spread>=0:${PORTSDIR}/net/spread
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
