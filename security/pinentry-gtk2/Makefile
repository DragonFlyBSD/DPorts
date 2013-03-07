# Created by: Jean-Yves Lefort <jylefort@brutele.be>
# $FreeBSD: ports/security/pinentry-gtk2/Makefile,v 1.6 2013/02/06 13:14:25 svnexp Exp $

PORTNAME=	pinentry

COMMENT=	GTK+ 2.0 version of the GnuPG password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* pinentry-gtk-* \
		pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-gtk2
PORT_OPTIONS+=	GTK2

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
