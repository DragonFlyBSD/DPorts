# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/p5-MouseX-StrictConstructor/Makefile 325163 2013-08-21 17:42:57Z sunpoet $

PORTNAME=	MouseX-StrictConstructor
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GFUJI
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Make your object constructors blow up on unknown attributes

BUILD_DEPENDS=	p5-Mouse>=0.62:${PORTSDIR}/devel/p5-Mouse
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

MAN3=		MouseX::StrictConstructor.3

.include <bsd.port.mk>
