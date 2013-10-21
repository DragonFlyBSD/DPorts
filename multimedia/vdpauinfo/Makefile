# Created by: Anonymous <swell.k@gmail.com>
# $FreeBSD: multimedia/vdpauinfo/Makefile 330313 2013-10-14 12:20:58Z madpilot $

PORTNAME=	vdpauinfo
PORTVERSION=	0.0.6
CATEGORIES=	multimedia
MASTER_SITES=	http://people.freedesktop.org/~aplattner/vdpau/

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	A tool to query VDPAU capabilities

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libvdpau.so:${PORTSDIR}/multimedia/libvdpau

USES=		pkgconfig
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/vdpauinfo

.include <bsd.port.mk>
