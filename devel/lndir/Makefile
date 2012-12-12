# New ports collection makefile for:	lndir
# Date Created:				13 Oct 2007
# Whom:					Carlos A M dos Santos <unixmania@gmail.com>
#
# $FreeBSD: ports/devel/lndir/Makefile,v 1.4 2012/11/17 05:55:58 svnexp Exp $
#

PORTNAME=	lndir
PORTVERSION=	1.0.3
CATEGORIES=	devel

MAINTAINER=	unixmania@gmail.com
COMMENT=	Create a shadow directory of symbolic links to another directory tree

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/xorg-macros.pc:${PORTSDIR}/devel/xorg-macros

XORG_CAT=	util
USE_XORG=	xproto

PLIST_FILES=	bin/lndir

MAN1=		lndir.1

.include <bsd.port.mk>
