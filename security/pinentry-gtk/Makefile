# Created by: Michael Nottebrock <lofi@freebsd.org>
# $FreeBSD: security/pinentry-gtk/Makefile 322559 2013-07-09 13:37:13Z makc $

PORTNAME=	pinentry
PORTREVISION=	3

COMMENT=	GTK version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* \
		pinentry-gtk2-* pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-gtk
PORT_OPTIONS+=	GTK

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
