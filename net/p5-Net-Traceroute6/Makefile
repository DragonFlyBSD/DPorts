# Created by: petef
# $FreeBSD: net/p5-Net-Traceroute6/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-Traceroute6
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	net perl5 ipv6
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl module to parse traceroute6(8) output

BUILD_DEPENDS=	p5-Socket6>=0:${PORTSDIR}/net/p5-Socket6
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::Traceroute6.3

NO_STAGE=	yes
.include <bsd.port.mk>
