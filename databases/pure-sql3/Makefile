# New ports collection makefile for:	pure-sql3
# Date created:		2011-03-18
# Whom:			Zhihao Yuan <lichray@gmail.com>
#
# $FreeBSD: ports/databases/pure-sql3/Makefile,v 1.4 2012/11/17 05:55:21 svnexp Exp $
#

PORTNAME=	pure-sql3
PORTVERSION=	0.4
PORTREVISION=	1
CATEGORIES=	databases

MAINTAINER=	lichray@gmail.com
COMMENT=	Pure language binding to the SQLite3 library

LIB_DEPENDS=	sqlite3:${PORTSDIR}/databases/sqlite3

USE_PURE=	yes

PLIST_FILES=	lib/pure/sql3.pure \
		lib/pure/sql3util.so

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/lang/pure/bsd.pure.mk"
.include <bsd.port.post.mk>
