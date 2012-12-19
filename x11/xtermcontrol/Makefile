# New ports collection makefile for:	xtermcontrol
# Date created:				23.12.2004
# Whom:					krion
#
# $FreeBSD: ports/x11/xtermcontrol/Makefile,v 1.16 2012/11/17 06:03:23 svnexp Exp $
#

PORTNAME=	xtermcontrol
PORTVERSION=	2.10
PORTREVISION=	1
CATEGORIES=	x11
MASTER_SITES=	http://www.thrysoee.dk/xtermcontrol/

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	Tool for dynamic control of xterm properties

RUN_DEPENDS=	xterm:${PORTSDIR}/x11/xterm

USE_GETTEXT=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include

PLIST_FILES=	bin/xtermcontrol
MAN1=		${PORTNAME}.1

.include <bsd.port.mk>
