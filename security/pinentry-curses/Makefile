# Created by: Michael Nottebrock <lofi@FreeBSD.org>
# $FreeBSD: security/pinentry-curses/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	pinentry
PORTREVISION=	0

COMMENT=	Curses version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-gtk-* \
		pinentry-gtk2-* pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-curses
PORT_OPTIONS+=	NCURSES

MASTERDIR=	${.CURDIR}/../pinentry

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
