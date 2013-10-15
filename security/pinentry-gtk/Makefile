# Created by: Michael Nottebrock <lofi@FreeBSD.org>
# $FreeBSD: security/pinentry-gtk/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	pinentry
PORTREVISION=	0

COMMENT=	GTK version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* \
		pinentry-gtk2-* pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-gtk
PORT_OPTIONS+=	GTK

MASTERDIR=	${.CURDIR}/../pinentry

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
