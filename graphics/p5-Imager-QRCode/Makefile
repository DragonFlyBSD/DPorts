# Created by: chinsan
# $FreeBSD: graphics/p5-Imager-QRCode/Makefile 318752 2013-05-22 09:23:43Z tobez $

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

PERL_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include

MAN3=		Imager::QRCode.3

.include <bsd.port.mk>
