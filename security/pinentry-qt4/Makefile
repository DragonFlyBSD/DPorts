# $FreeBSD: security/pinentry-qt4/Makefile 325273 2013-08-23 16:12:31Z makc $

PORTNAME=	pinentry
PORTREVISION=	0

COMMENT=	Qt 4 version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* pinentry-gtk-* \
		pinentry-gtk2-* pinentry-qt-*

PINENTRY_SLAVE=	-qt4
PORT_OPTIONS+=	QT4

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
