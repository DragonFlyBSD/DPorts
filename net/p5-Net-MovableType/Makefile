# Created by: clsung@dragon2.net
# $FreeBSD: net/p5-Net-MovableType/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-MovableType
PORTVERSION=	1.74
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Lightweight MovableType client Perl module

BUILD_DEPENDS=	p5-SOAP-Lite>=0:${PORTSDIR}/net/p5-SOAP-Lite
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::MovableType.3

NO_STAGE=	yes
.include <bsd.port.mk>
