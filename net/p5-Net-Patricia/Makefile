# Created by: Andreas Klemm <andreas@klemm.gtn.com>
# $FreeBSD: net/p5-Net-Patricia/Makefile 330483 2013-10-16 07:07:00Z culot $

PORTNAME=	Net-Patricia
PORTVERSION=	1.22
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for fast IP address lookups

BUILD_DEPENDS=	p5-Net-CIDR-Lite>=0.20:${PORTSDIR}/net/p5-Net-CIDR-Lite
RUN_DEPENDS=	p5-Socket6>=0:${PORTSDIR}/net/p5-Socket6

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
