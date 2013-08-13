# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: net/p5-POE-Component-Spread/Makefile 324174 2013-08-02 18:52:07Z mat $

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

.include <bsd.port.mk>
