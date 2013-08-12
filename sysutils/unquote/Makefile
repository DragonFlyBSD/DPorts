# Created by: roam@FreeBSD.org
# $FreeBSD: sysutils/unquote/Makefile 323129 2013-07-16 21:59:48Z eadler $

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
