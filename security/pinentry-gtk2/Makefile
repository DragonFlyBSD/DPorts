# Created by: Jean-Yves Lefort <jylefort@brutele.be>
# $FreeBSD: security/pinentry-gtk2/Makefile 331383 2013-10-23 13:08:41Z makc $

PORTNAME=	pinentry
PORTREVISION=	0

COMMENT=	GTK+ 2.0 version of the GnuPG password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* pinentry-gtk-* \
		pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-gtk2
PORT_OPTIONS+=	GTK2

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
