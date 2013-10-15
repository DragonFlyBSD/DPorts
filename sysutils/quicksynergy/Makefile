# Created by: Lars Engels <lme@FreeBSD.org>
# $FreeBSD: sysutils/quicksynergy/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	quicksynergy
PORTVERSION=	0.9.0
PORTREVISION=	5
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/Linux/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A graphical interface for easily configuring Synergy2

BUILD_DEPENDS=	synergys:${PORTSDIR}/sysutils/synergy

GNU_CONFIGURE=	yes
USES=		pathfix pkgconfig gettext iconv
USE_GNOME=	gnomeprefix libglade2

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	bin/quicksynergy \
		share/locale/pt_BR/LC_MESSAGES/quicksynergy.mo

NO_STAGE=	yes
.include <bsd.port.mk>
