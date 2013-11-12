# Created by: chinsan
# $FreeBSD: textproc/p5-HTML-QRCode/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	HTML-QRCode
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate HTML based QR Code

BUILD_DEPENDS=	p5-Text-QRCode>0:${PORTSDIR}/textproc/p5-Text-QRCode
RUN_DEPENDS:=	${BUILD_DEPENDS}
LIB_DEPENDS=	libqrencode.so:${PORTSDIR}/graphics/libqrencode

USES=		perl5
USE_PERL5=	configure
CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
