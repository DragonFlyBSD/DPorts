# New ports collection makefile for:	p5-Text-QRCode
# Date created:				2011/02/14
# Whom:					chinsan
#
# $FreeBSD: ports/textproc/p5-Text-QRCode/Makefile,v 1.4 2012/11/17 06:02:10 svnexp Exp $
#

PORTNAME=	Text-QRCode
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	chinsan@FreeBSD.org
COMMENT=	Generate text based QR Code

BUILD_DEPENDS=	libqrencode>=2.0.0:${PORTSDIR}/graphics/libqrencode
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include

MAN3=		Text::QRCode.3

.include <bsd.port.mk>
