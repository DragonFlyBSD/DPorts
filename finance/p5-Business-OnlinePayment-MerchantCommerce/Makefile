# New ports collection makefile for:	Business::OnlinePayment::MerchantCommerce
# Date created:				24 February 2003
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/finance/p5-Business-OnlinePayment-MerchantCommerce/Makefile,v 1.9 2012/11/17 05:57:26 svnexp Exp $
#

PORTNAME=	Business-OnlinePayment-MerchantCommerce
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	finance perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A Business::OnlinePayment backend module for MerchantCommerce authorization service

BUILD_DEPENDS=	p5-Business-OnlinePayment>=0:${PORTSDIR}/finance/p5-Business-OnlinePayment
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Business::OnlinePayment::MerchantCommerce.3

.include <bsd.port.mk>
