# New ports collection makefile for:    pinentry-gtk
# Date created:                         03 May 2004
# Whom:					Michael Nottebrock <lofi@freebsd.org>
#
# $FreeBSD: ports/security/pinentry-gtk/Makefile,v 1.5 2012/11/17 06:01:15 svnexp Exp $
#

PORTNAME=	pinentry

COMMENT=	GTK version of the gnupg password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* \
		pinentry-gtk2-* pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-gtk
PORT_OPTIONS+=	GTK

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
