# New ports collection makefile for:	xmms-festalon
# Date created:				13 Jul 2005
# Whom:					Emanuel Haupt <ehaupt@critical.ch>
#
# $FreeBSD: ports/audio/xmms-festalon/Makefile,v 1.6 2012/11/17 05:54:48 svnexp Exp $
#

PKGNAMEPREFIX=	xmms-

COMMENT=	A XMMS plugin for playing .nsf and .hes audio files

MASTERDIR=	${.CURDIR}/../festalon

BUILD_DEPENDS=	xmms:${PORTSDIR}/multimedia/xmms
RUN_DEPENDS=	xmms:${PORTSDIR}/multimedia/xmms

USE_GNOME=	glib12
CONFIGURE_ARGS+=	--enable-interface=interface

DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

PLIST_FILES=	lib/xmms/Input/libfestalon_xmms.a \
		lib/xmms/Input/libfestalon_xmms.la \
		lib/xmms/Input/libfestalon_xmms.so \
		lib/xmms/Input/libfestalon_xmms.so.0

.include "${MASTERDIR}/Makefile"
