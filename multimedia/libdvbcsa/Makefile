# Created by: Bernhard Froehlich <decke@FreeBSD.org>
# $FreeBSD: multimedia/libdvbcsa/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

PORTNAME=	libdvbcsa
PORTVERSION=	1.1.0
CATEGORIES=	multimedia
MASTER_SITES=	http://download.videolan.org/pub/videolan/${PORTNAME}/${PORTVERSION}/ \
		http://ftp.heikorichter.name/pub/videolan/${PORTNAME}/${PORTVERSION}/

MAINTAINER=	decke@FreeBSD.org
COMMENT=	A free implementation of the DVB Common Scrambling Algorithm

LICENSE=	GPLv2

USE_LDCONFIG=	yes
HAS_CONFIGURE=	yes

CONFIGURE_ARGS+=        --prefix="${PREFIX}" \
		--enable-mmx --enable-sse2

.include <bsd.port.mk>
