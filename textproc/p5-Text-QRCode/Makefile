# Created by: chinsan
# $FreeBSD: textproc/p5-Text-QRCode/Makefile 331013 2013-10-20 12:54:30Z sunpoet $

PORTNAME=	Text-QRCode
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate text based QR Code

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	libqrencode>=2.0.0:${PORTSDIR}/graphics/libqrencode
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
