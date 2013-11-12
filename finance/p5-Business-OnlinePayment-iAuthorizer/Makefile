# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: finance/p5-Business-OnlinePayment-iAuthorizer/Makefile 332619 2013-11-03 15:38:39Z vanilla $

PORTNAME=	Business-OnlinePayment-iAuthorizer
PORTVERSION=	0.2.1
PORTREVISION=	1
CATEGORIES=	finance perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A Business::OnlinePayment backend module for iAuthorizer

BUILD_DEPENDS=	p5-Business-OnlinePayment>=0:${PORTSDIR}/finance/p5-Business-OnlinePayment
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/${PORTNAME}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
