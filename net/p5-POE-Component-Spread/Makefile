# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: net/p5-POE-Component-Spread/Makefile 327755 2013-09-20 22:10:23Z bapt $

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

MAN3=		POE::Component::Spread.3

NO_STAGE=	yes
.include <bsd.port.mk>
