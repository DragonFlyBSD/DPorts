# Created by: Michael Nottebrock <lofi@FreeBSD.org>
# $FreeBSD: security/pinentry-curses/Makefile 331383 2013-10-23 13:08:41Z makc $

PORTNAME=	pinentry
PORTREVISION=	0

COMMENT=	Curses version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-gtk-* \
		pinentry-gtk2-* pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-curses
PORT_OPTIONS+=	NCURSES

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
