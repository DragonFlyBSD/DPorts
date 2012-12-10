# New ports collection makefile for:    juke
# Date created:         2 May 1999
# Whom:                 oyvindmo@initio.no
#
# $FreeBSD: ports/audio/juke/Makefile,v 1.16 2012/11/17 05:54:35 svnexp Exp $
#

PORTNAME=		juke
PORTVERSION=		0.7
CATEGORIES=		audio
MASTER_SITES=		http://www.moll.no/oyvind/distfiles/\
			http://www.orakel.ntnu.no/~oyvindmo/distfiles/

MAINTAINER=		ports@FreeBSD.org
COMMENT=	A simple curses/ncurses based juke box program

GNU_CONFIGURE=		yes

MAN1=			juke.1
SUB_FILES=		pkg-message

.if defined(WITH_VI_BINDINGS)
EXTRA_PATCHES=	${FILESDIR}/extra-patch-vi
.endif

post-install:
	${INSTALL_DATA} ${WRKSRC}/juke.conf ${PREFIX}/etc/juke.conf.sample
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
