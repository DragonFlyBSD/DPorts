# New ports collection makefile for:    pinentry-curses
# Date created:                         03 May 2004
# Whom:					Michael Nottebrock <lofi@freebsd.org>
#
# $FreeBSD: ports/security/pinentry-curses/Makefile,v 1.5 2012/11/17 06:01:15 svnexp Exp $
#

PORTNAME=	pinentry

COMMENT=	Curses version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-gtk-* \
		pinentry-gtk2-* pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-curses
PORT_OPTIONS+=	NCURSES

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
