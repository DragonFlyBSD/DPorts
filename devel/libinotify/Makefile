# Created by: stas
# $FreeBSD: head/devel/libinotify/Makefile 460912 2018-02-04 10:48:47Z sunpoet $

PORTNAME=	libinotify
PORTVERSION=	20180201
CATEGORIES=	devel

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Kevent based inotify compatible library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
USES=		autoreconf libtool

GH_ACCOUNT=	${PORTNAME}-kqueue
GH_PROJECT=	${PORTNAME}-kqueue
USE_GITHUB=	yes

.include <bsd.port.mk>
