# New ports collection makefile for:	SketchyLISP
# Date created:				12 May 2005
# Whom:					Nils M Holm <nmh@t3x.org>
#
# $FreeBSD: ports/lang/sketchy/Makefile,v 1.23 2012/11/17 05:58:56 svnexp Exp $
#

PORTNAME=	sketchy
PORTVERSION=	20070218
CATEGORIES=	lang devel lisp scheme
MASTER_SITES=	http://www.t3x.org/files/

MAINTAINER=	nmh@t3x.org
COMMENT=	An interpreter for purely applicative Scheme

USE_LDCONFIG=	yes
MAKE_ENV+=	BINOWN=${BINOWN} \
		BINGRP=${BINGRP}

MAN1=		sketchy.1 skpp.1
MLINKS=		sketchy.1 sk.1

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|g' ${WRKSRC}/sketchy.h
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|g' ${WRKSRC}/src/pp.scm

.include <bsd.port.mk>
