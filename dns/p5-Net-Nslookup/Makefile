# Created by: clsung@dragon2.net
# $FreeBSD: dns/p5-Net-Nslookup/Makefile 336341 2013-12-13 12:56:06Z culot $

PORTNAME=	Net-Nslookup
PORTVERSION=	2.04
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provides the capabilities of the standard tool nslookup(1)

BUILD_DEPENDS=	p5-Net-DNS>=0:${PORTSDIR}/dns/p5-Net-DNS
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
