# New ports collection makefile for:   granulate
# Date created:			Feb 17, 2001
# Whom:				Ying-Chieh Liao <ijliao@FreeBSD.org>
#
# $FreeBSD: ports/misc/granulate/Makefile,v 1.11 2012/11/17 05:59:38 svnexp Exp $
#

PORTNAME=	granulate
PORTVERSION=	0.2
CATEGORIES=	misc
MASTER_SITES=	http://exe2bin.com/granulate/ \
		http://keyserver.kjsl.com/~jharris/distfiles/

MAINTAINER=	jharris@widomaker.com
COMMENT=	Granulate is a program for splitting files in place

PLIST_FILES=	bin/granulate
post-patch:
	@${REINPLACE_CMD} -e "s,^CC,#CC,g ; s,^CFLAGS,#CFLAGS,g" \
	${WRKSRC}/Makefile

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
