# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: net/p5-Net-MAC/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-MAC
PORTVERSION=	2.103622
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Perl 5 module for representing and manipulating MAC addresses

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww

MAN3=		Net::MAC.3

USES=		perl5
USE_PERL5=	configure

NO_STAGE=	yes
.include <bsd.port.mk>
