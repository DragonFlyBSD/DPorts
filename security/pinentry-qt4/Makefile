# $FreeBSD: ports/security/pinentry-qt4/Makefile,v 1.4 2013/02/06 13:14:25 svnexp Exp $

PORTNAME=	pinentry

COMMENT=	QT4 version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* pinentry-gtk-* \
		pinentry-gtk2-* pinentry-qt-*

PINENTRY_SLAVE=	-qt4
PORT_OPTIONS+=	QT4

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
