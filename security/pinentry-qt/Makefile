# New ports collection makefile for:    pinentry-qt
# Date created:                         03 May 2004
# Whom:					Michael Nottebrock <lofi@freebsd.org>
#
# $FreeBSD: ports/security/pinentry-qt/Makefile,v 1.5 2012/11/17 06:01:15 svnexp Exp $
#

PORTNAME=	pinentry

COMMENT=	QT3 version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* pinentry-gtk-* \
		pinentry-gtk2-* pinentry-qt4-*

PINENTRY_SLAVE=	-qt3
PORT_OPTIONS+=	QT3

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
