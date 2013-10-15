# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: sysutils/cdircmp/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	cdircmp
PORTVERSION=	0.3
CATEGORIES=	sysutils
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Compare directories and select files to copy

LICENSE=	GPLv2

LDFLAGS+=	-lncurses -lform

PLIST_FILES=	bin/cdircmp

NO_STAGE=	yes
do-build:
	${CC} ${CFLAGS} -c ${WRKSRC}/main.c -o ${WRKSRC}/main.o
	${CC} ${LDFLAGS} -o ${WRKSRC}/${PORTNAME} ${WRKSRC}/main.o

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
