# New ports collection makefile for:	dlume
# Date created:				07 November 2003
# Whom:					Adam Weinberger <adamw@FreeBSD.org>
#
# $FreeBSD: ports/deskutils/dlume/Makefile,v 1.27 2012/11/17 05:55:26 svnexp Exp $
#

PORTNAME=	dlume
PORTVERSION=	0.2.4
PORTREVISION=	11
CATEGORIES=	deskutils gnome
MASTER_SITES=	${MASTER_SITE_TUCOWS}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GTK2 address book

USE_GNOME=	gnomehack gnomeprefix gtk20 libxml2
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		${PORTNAME}.1
PLIST_FILES=	bin/dlume share/pixmaps/dlume.png

post-patch:
	@${REINPLACE_CMD} -e 's|-O2||g' ${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
