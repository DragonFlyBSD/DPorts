# Created by: Michael Nottebrock <lofi@FreeBSD.org>
# $FreeBSD: security/pinentry-gtk/Makefile 331383 2013-10-23 13:08:41Z makc $

PORTNAME=	pinentry
PORTREVISION=	0

COMMENT=	GTK version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* \
		pinentry-gtk2-* pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-gtk
PORT_OPTIONS+=	GTK

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
