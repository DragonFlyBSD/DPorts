# Created by: Michael Nottebrock <lofi@freebsd.org>
# $FreeBSD: ports/security/pinentry-qt/Makefile,v 1.6 2013/02/06 13:14:25 svnexp Exp $

PORTNAME=	pinentry

COMMENT=	QT3 version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* pinentry-gtk-* \
		pinentry-gtk2-* pinentry-qt4-*

PINENTRY_SLAVE=	-qt3
PORT_OPTIONS+=	QT3

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
