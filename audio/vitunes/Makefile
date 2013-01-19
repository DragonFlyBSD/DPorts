# New ports collection makefile for:	vitunes
# Date created:		2009-09-02
# Whom:			Dennis Herrmann <dhn@FreeBSD.org>
#
# $FreeBSD: ports/audio/vitunes/Makefile,v 1.16 2012/11/17 05:54:46 svnexp Exp $
#

PORTNAME=	vitunes
PORTVERSION=	2.3
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://vitunes.org/files/ \
		http://mirror.4bit.ws/ \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	dhn

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	A curses-based media player with vim-like keybinds

RUN_DEPENDS=	mplayer:${PORTSDIR}/multimedia/mplayer
LIB_DEPENDS=	tag:${PORTSDIR}/audio/taglib

ALL_TARGET=	vitunes
PLIST_FILES=	bin/vitunes
MAN1=	vitunes.1

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|g' ${WRKSRC}/Makefile
	@${REINPLACE_CMD} -e '27d' ${WRKSRC}/vitunes.h

.include <bsd.port.mk>
