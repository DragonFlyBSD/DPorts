# New ports collection makefile for:	p5-Net-MAC-Vendor
# Date created:				25 May 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/net/p5-Net-MAC-Vendor/Makefile,v 1.15 2012/11/17 06:00:11 svnexp Exp $
#

PORTNAME=	Net-MAC-Vendor
PORTVERSION=	1.1901
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Look up the vendor for a MAC

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww

MAN3=	Net::MAC::Vendor.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
