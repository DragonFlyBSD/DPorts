# Created by: roam@FreeBSD.org
# $FreeBSD: ports/sysutils/unquote/Makefile,v 1.9 2012/11/17 06:01:48 svnexp Exp $

PORTNAME=	unquote
PORTVERSION=	1.0.b4
CATEGORIES=	sysutils
MASTER_SITES=	http://devel.ringlet.net/misc/unquote/
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.b/pre/}

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	Execute a command with safely quoted arguments

MAN1=		unquote.1
MANCOMPRESSED=	yes
PLIST_FILES=	bin/unquote

.if		!defined(NO_RELEASE)
MAKE_ENV+=	RELEASE=yes
.endif

.include <bsd.port.mk>
