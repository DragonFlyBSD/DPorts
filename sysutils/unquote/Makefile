# Created by: roam@FreeBSD.org
# $FreeBSD: sysutils/unquote/Makefile 313672 2013-03-08 20:23:38Z eadler $

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

MAKE_JOBS_SAFE=	yes

.if		!defined(NO_RELEASE)
MAKE_ENV+=	RELEASE=yes
.endif

.include <bsd.port.mk>
