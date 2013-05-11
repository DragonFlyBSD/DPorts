# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: databases/mergeant/Makefile 316407 2013-04-24 07:35:40Z ak $
#   $MCom: ports/databases/mergeant/Makefile,v 1.20 2008/02/05 13:30:46 kwm Exp $

PORTNAME=	mergeant
PORTVERSION=	0.67
PORTREVISION=	6
CATEGORIES=	databases gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Provide uniform access to data sources for the GNOME 2 environment

USE_BZIP2=	yes
USE_GMAKE=	yes
USES=		pathfix gettext
USE_GNOME=	gnomeprefix intlhack libgnomedb
USE_PERL5=	yes
GNU_CONFIGURE=	yes
INSTALLS_OMF=	yes
INSTALLS_ICONS=	yes
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include -DGLIB_COMPILATION
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
