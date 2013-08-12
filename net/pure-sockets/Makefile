# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: net/pure-sockets/Makefile 322734 2013-07-10 21:28:56Z bapt $

PORTNAME=	pure-sockets
PORTVERSION=	0.6
CATEGORIES=	net

MAINTAINER=	lichray@gmail.com
COMMENT=	Pure language interface to the Berkeley socket functions

USE_PURE=	yes

PLIST_FILES=	lib/pure/sockets.pure \
		lib/pure/sockets.so

.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
