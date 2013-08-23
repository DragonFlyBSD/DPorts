# Created by: Toni Gundogdu <legatvs@gmail.com>
# $FreeBSD: multimedia/cclive/Makefile 324744 2013-08-14 22:35:50Z ak $

PORTNAME=	cclive
PORTVERSION=	0.7.11
PORTREVISION=	3
CATEGORIES=	multimedia net
MASTER_SITES=	SF/${PORTNAME}/0.7 \
		GOOGLE_CODE

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	Lightweight command line video extraction tool

LICENSE=	GPLv3

LIB_DEPENDS=	boost_system:${PORTSDIR}/devel/boost-libs \
		curl:${PORTSDIR}/ftp/curl \
		pcre.3:${PORTSDIR}/devel/pcre \
		quvi.7:${PORTSDIR}/multimedia/libquvi

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--with-boost=${LOCALBASE}
USES=		pkgconfig
USE_XZ=		yes

MAN1=		cclive.1
PLIST_FILES=	bin/ccl \
		bin/cclive

.include <bsd.port.mk>
