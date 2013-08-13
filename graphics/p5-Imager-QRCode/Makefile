# Created by: chinsan
# $FreeBSD: graphics/p5-Imager-QRCode/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Imager-QRCode
PORTVERSION=	0.03.4
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-0.034

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate QR Code with Imager using libqrencode

BUILD_DEPENDS=	p5-Imager>=0.55:${PORTSDIR}/graphics/p5-Imager
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAKE_JOBS_UNSAFE=	yes

USES=		perl5
USE_PERL5=	configure
CFLAGS+=	-I${LOCALBASE}/include

MAN3=		Imager::QRCode.3

.include <bsd.port.mk>
