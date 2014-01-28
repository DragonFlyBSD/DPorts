# Created by: Ashish Shukla <wahjava@gmail.com>
# $FreeBSD: irc/irssi-otr/Makefile 341430 2014-01-27 16:51:12Z miwi $

PORTNAME=	irssi-otr
PORTVERSION=	0.3
PORTREVISION=	6
CATEGORIES=	irc
MASTER_SITES=	ftp://download.tuxfamily.org/${MASTER_SITE_SUBDIR}/
MASTER_SITE_SUBDIR=	irssiotr

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	A plugin for irssi for Off-the-Record (OTR) messaging

BUILD_DEPENDS=	${LOCALBASE}/include/irssi/src/common.h:${PORTSDIR}/irc/irssi \
		${LOCALBASE}/bin/libgcrypt-config:${PORTSDIR}/security/libgcrypt
LIB_DEPENDS=	otr.4:${PORTSDIR}/security/libotr3 \
		gcrypt:${PORTSDIR}/security/libgcrypt
RUN_DEPENDS=	irssi:${PORTSDIR}/irc/irssi

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake pkgconfig
USE_LDCONFIG=	yes
USE_GNOME=	glib20

PLIST_FILES=	lib/irssi/modules/libotr.so \
		%%DOCSDIR%%/LICENSE %%DOCSDIR%%/README
PLIST_DIRS=	%%DOCSDIR%%

.include <bsd.port.mk>
