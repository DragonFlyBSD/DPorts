# Created by: Michael Nottebrock <lofi@freebsd.org>
# $FreeBSD: ports/security/pinentry-gtk/Makefile,v 1.6 2013/02/06 13:14:25 svnexp Exp $

PORTNAME=	pinentry

COMMENT=	GTK version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* \
		pinentry-gtk2-* pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-gtk
PORT_OPTIONS+=	GTK

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
