# Created by: clsung@dragon2.net
# $FreeBSD: net/p5-Net-MovableType/Makefile 332868 2013-11-05 16:42:55Z vanilla $

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

.include <bsd.port.mk>
