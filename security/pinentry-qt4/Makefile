# $FreeBSD: security/pinentry-qt4/Makefile 331383 2013-10-23 13:08:41Z makc $

PORTNAME=	pinentry
PORTREVISION=	0

COMMENT=	Qt 4 version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* pinentry-gtk-* \
		pinentry-gtk2-* pinentry-qt-*

PINENTRY_SLAVE=	-qt4
PORT_OPTIONS+=	QT4

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
