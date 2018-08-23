# Created by: wahjava
# $FreeBSD: head/devel/libpthread-stubs/Makefile 463876 2018-03-08 08:33:08Z amdmi3 $

PORTNAME=	libpthread-stubs
PORTVERSION=	0.4
CATEGORIES=	devel
MASTER_SITES=	http://xcb.freedesktop.org/dist/

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	This library provides weak aliases for pthread functions

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		pathfix tar:bzip2
GNU_CONFIGURE=	yes
NO_ARCH=	yes

PLIST_FILES=	libdata/pkgconfig/pthread-stubs.pc

.include <bsd.port.mk>
