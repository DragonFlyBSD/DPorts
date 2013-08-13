# Created by: clsung@dragon2.net
# $FreeBSD: net/p5-Net-MovableType/Makefile 324174 2013-08-02 18:52:07Z mat $

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

.include <bsd.port.mk>
