# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: ports/audio/cpp-xmms2/Makefile,v 1.16 2012/11/17 05:54:29 svnexp Exp $

PORTREVISION=	6
CATEGORIES=	audio
PKGNAMEPREFIX=	cpp-

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	C++ Bindings for XMMS2

LIB_DEPENDS+=	boost_signals.4:${PORTSDIR}/devel/boost-libs \
		xmmsclient.6:${PORTSDIR}/audio/xmms2

MASTERDIR=	${.CURDIR}/../xmms2
USE_LDCONFIG=	yes
USE_GNOME=	glib20

PLIST=		${.CURDIR}/pkg-plist

XMMS2_SLAVE=	cpp

.include "${MASTERDIR}/Makefile"
