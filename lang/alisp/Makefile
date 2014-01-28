# Created by: Nils M Holm <nmh@t3x.org>
# $FreeBSD: lang/alisp/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	alisp
PORTVERSION=	20060917
CATEGORIES=	lang devel lisp
MASTER_SITES=	http://t3x.org/files/

MAINTAINER=	nmh@t3x.org
COMMENT=	An interpreter for purely symbolic LISP

MAN7=		alisp.7
MANCOMPRESSED=	no

USE_LDCONFIG=	yes
MAKE_ENV+=	BINOWN=${BINOWN} \
		BINGRP=${BINGRP}

post-patch:	.SILENT
	${REINPLACE_CMD} -e 's/cc/$$(CC)/' \
		-e '/^CFLAGS/{s/=/+=/;s/-g//;s/-O//;}' \
		-e '/strip alisp/d' \
		-e '/install.*alisp /s/install/& ${STRIP}/' \
		${WRKSRC}/Makefile
	${REINPLACE_CMD} -e 's,/usr/local,${PREFIX},g' ${WRKSRC}/alisp.h

NO_STAGE=	yes
.include <bsd.port.mk>
