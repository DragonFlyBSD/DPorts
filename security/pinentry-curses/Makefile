# Created by: Michael Nottebrock <lofi@freebsd.org>
# $FreeBSD: security/pinentry-curses/Makefile 325273 2013-08-23 16:12:31Z makc $

PORTNAME=	pinentry
PORTREVISION=	0

COMMENT=	Curses version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-gtk-* \
		pinentry-gtk2-* pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-curses
PORT_OPTIONS+=	NCURSES

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
