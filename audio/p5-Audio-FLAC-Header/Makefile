# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: audio/p5-Audio-FLAC-Header/Makefile 336166 2013-12-11 14:35:36Z bapt $

PORTNAME=	Audio-FLAC-Header
PORTVERSION=	2.4
PORTREVISION=	1
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Interface to FLAC header metadata

LIB_DEPENDS=	libFLAC.so:${PORTSDIR}/audio/flac

USES=		perl5
NO_STAGE=	yes
USE_PERL5=	configure
CFLAGS+=	-I${LOCALBASE}/include

MAN3=		Audio::FLAC::Header.3

.include <bsd.port.mk>
