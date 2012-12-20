# New ports collection makefile for:	p5-Net-DNS-RR-SRV-Helper
# Date created:		2010-05-14
# Whom:			Zane C, Bowers <vvelox@vvelox.net>
#
# $FreeBSD: ports/dns/p5-Net-DNS-RR-SRV-Helper/Makefile,v 1.5 2012/11/17 05:57:10 svnexp Exp $
#

PORTNAME=	Net-DNS-RR-SRV-Helper
PORTVERSION=	0.0.0
PORTREVISION=	1
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VVELOX
PKGNAMEPREFIX=	p5-

MAINTAINER=	vvelox@vvelox.net
COMMENT=	Orders SRV records by priority and weight for Net::DNS

BUILD_DEPENDS=	p5-Net-DNS>=0.68:${PORTSDIR}/dns/p5-Net-DNS \
		p5-Sort-Naturally>=1.03:${PORTSDIR}/textproc/p5-Sort-Naturally
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Net::DNS::RR::SRV::Helper.3

.include <bsd.port.mk>
