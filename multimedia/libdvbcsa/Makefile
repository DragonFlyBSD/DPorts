# Created by: Bernhard Froehlich <decke@FreeBSD.org>
# $FreeBSD: multimedia/libdvbcsa/Makefile 326735 2013-09-08 14:50:34Z decke $

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
