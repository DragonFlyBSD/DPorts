# Created by: ache
# $FreeBSD: devel/patch/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	patch
PORTVERSION=	2.7
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	patch

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	GNU patch utility

LICENSE=	GPLv3

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--program-prefix=g
USE_GMAKE=	yes
USE_XZ=		yes
USES=		charsetfix

MAN1=		gpatch.1
PLIST_FILES=	bin/gpatch

NO_STAGE=	yes
.include <bsd.port.mk>
