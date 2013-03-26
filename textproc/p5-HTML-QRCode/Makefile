# New ports collection makefile for:	p5-HTML-QRCode
# Date created:				2011/02/14
# Whom:					chinsan
#
# $FreeBSD: textproc/p5-HTML-QRCode/Makefile 300897 2012-07-14 14:29:18Z beat $
#

PORTNAME=	HTML-QRCode
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	chinsan@FreeBSD.org
COMMENT=	Generate HTML based QR Code

BUILD_DEPENDS=	p5-Text-QRCode>0:${PORTSDIR}/textproc/p5-Text-QRCode \
		libqrencode>=2.0.0:${PORTSDIR}/graphics/libqrencode
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include

MAN3=		HTML::QRCode.3

.include <bsd.port.mk>
