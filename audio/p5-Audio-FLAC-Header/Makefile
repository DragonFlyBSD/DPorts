# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: audio/p5-Audio-FLAC-Header/Makefile 341813 2014-01-30 08:45:50Z az $

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
USE_PERL5=	configure
CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
