# Created by: Ben Kibbey <bjk@arbornet.org>
# $FreeBSD: security/bubblegum/Makefile 333234 2013-11-08 14:43:21Z jadawin $

PORTNAME=	bubblegum
PORTVERSION=	1.12
CATEGORIES=	security
MASTER_SITES=	SF/bjk/${PORTNAME}/${PORTVERSION}

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Watch a file for changes

DEPRECATED=	No more active upstream
EXPIRATION_DATE=	2013-12-08

GNU_CONFIGURE=	yes

MAN1=		bubblegum.1
MANCOMPRESSED=	no
PLIST_FILES=	bin/bubblegum

NO_STAGE=	yes
pre-build:
	${CP} ${WRKSRC}/doc/bubblegum.man ${WRKSRC}/doc/bubblegum.1

.include <bsd.port.mk>
