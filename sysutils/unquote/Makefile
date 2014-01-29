# Created by: roam@FreeBSD.org
# $FreeBSD: sysutils/unquote/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	unquote
PORTVERSION=	1.0.b4
CATEGORIES=	sysutils
MASTER_SITES=	http://devel.ringlet.net/misc/unquote/
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.b/pre/}

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	Execute a command with safely quoted arguments

PLIST_FILES=	bin/unquote man/man1/unquote.1.gz

.if		!defined(NO_RELEASE)
MAKE_ENV+=	RELEASE=yes
.endif

.include <bsd.port.mk>
