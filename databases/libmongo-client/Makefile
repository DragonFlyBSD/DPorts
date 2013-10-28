# Created by: Denis Generalov <gd@rambler-co.ru>
# $FreeBSD: databases/libmongo-client/Makefile 331678 2013-10-26 12:39:19Z wg $

PORTNAME=	libmongo-client
PORTVERSION=	0.1.6.3
CATEGORIES=	databases

MAINTAINER=	gd@rambler-co.ru
COMMENT=	Alternative C driver for MongoDB

LICENSE=	AL2

USE_GITHUB=	yes
GH_ACCOUNT=	algernon
GH_TAGNAME=	${PORTNAME}-${PORTVERSION}
GH_COMMIT=	ff123ed # should be 9cbb488, but does not

USE_AUTOTOOLS=	automake autoconf libtool
GNU_CONFIGURE=	yes
USES=		pkgconfig gmake pathfix
USE_GNOME=	glib20
USE_LDCONFIG=	yes
CONFIGURE_ENV+=	PKG_CONFIG_DIR=${LOCALBASE}/libdata/pkgconfig
PATHFIX_MAKEFILEIN=Makefile.am

run-autotools:
	@cd ${CONFIGURE_WRKSRC} && \
		${SETENV} ${AUTOTOOLS_ENV} ${AUTORECONF} -i

.include <bsd.port.mk>
