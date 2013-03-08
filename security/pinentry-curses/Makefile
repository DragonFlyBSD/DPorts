# Created by: Michael Nottebrock <lofi@freebsd.org>
# $FreeBSD: ports/security/pinentry-curses/Makefile,v 1.6 2013/02/06 13:14:25 svnexp Exp $

PORTNAME=	pinentry

COMMENT=	Curses version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-gtk-* \
		pinentry-gtk2-* pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-curses
PORT_OPTIONS+=	NCURSES

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
