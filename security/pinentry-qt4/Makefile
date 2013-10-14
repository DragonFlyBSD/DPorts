# $FreeBSD: security/pinentry-qt4/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	pinentry
PORTREVISION=	0

COMMENT=	Qt 4 version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* pinentry-gtk-* \
		pinentry-gtk2-* pinentry-qt-*

PINENTRY_SLAVE=	-qt4
PORT_OPTIONS+=	QT4

MASTERDIR=	${.CURDIR}/../pinentry

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
