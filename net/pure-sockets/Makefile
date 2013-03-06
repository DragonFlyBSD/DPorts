# New ports collection makefile for:	pure-sockets
# Date created:		2011-03-18
# Whom:			Zhihao Yuan <lichray@gmail.com>
#
# $FreeBSD: ports/net/pure-sockets/Makefile,v 1.4 2012/11/17 06:00:15 svnexp Exp $
#

PORTNAME=	pure-sockets
PORTVERSION=	0.6
CATEGORIES=	net

MAINTAINER=	lichray@gmail.com
COMMENT=	Pure language interface to the Berkeley socket functions

USE_PURE=	yes

PLIST_FILES=	lib/pure/sockets.pure \
		lib/pure/sockets.so

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/lang/pure/bsd.pure.mk"
.include <bsd.port.post.mk>
