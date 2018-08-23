# Created by: Ashish Shukla <wahjava@gmail.com>
# $FreeBSD: head/x11/xcb-proto/Makefile 470141 2018-05-16 18:59:47Z zeising $

PORTNAME=	xcb-proto
PORTVERSION=	1.13
CATEGORIES=	x11 python
MASTER_SITES=	http://xcb.freedesktop.org/dist/

MAINTAINER=	x11@FreeBSD.org
COMMENT=	The X protocol C-language Binding (XCB) protocol

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GNOME=	libxml2:build
XORG_CAT=	proto
USES=		python
USE_PYTHON=	py3kplist
NO_ARCH=	yes

DATADIR=	${PREFIX}/share/xcb

.include <bsd.port.mk>
