# Created by: Andreas Klemm <andreas@klemm.gtn.com>
# $FreeBSD: net/p5-Net-Patricia/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-Patricia
PORTVERSION=	1.21
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for fast IP address lookups

BUILD_DEPENDS=	p5-Net-CIDR-Lite>=0.20:${PORTSDIR}/net/p5-Net-CIDR-Lite
RUN_DEPENDS=	p5-Socket6>=0:${PORTSDIR}/net/p5-Socket6

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::Patricia.3

NO_STAGE=	yes
.include <bsd.port.mk>
