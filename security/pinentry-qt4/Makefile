# New ports collection makefile for:	pinentry-qt4
# Date created:		2009-06-23
# Whom:			Max Brazhnikov <makc@FreeBSD.org>
#
# $FreeBSD: ports/security/pinentry-qt4/Makefile,v 1.3 2012/11/17 06:01:15 svnexp Exp $
#

PORTNAME=	pinentry

COMMENT=	QT4 version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* pinentry-gtk-* \
		pinentry-gtk2-* pinentry-qt-*

PINENTRY_SLAVE=	-qt4
PORT_OPTIONS+=	QT4

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
