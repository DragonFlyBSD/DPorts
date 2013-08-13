# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: net/p5-Spread-Message/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Spread-Message
PORTVERSION=	0.21
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MARKPF
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provide messaging using the Spread toolkit

BUILD_DEPENDS=	spread>=0:${PORTSDIR}/net/spread
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Spread::Message.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
