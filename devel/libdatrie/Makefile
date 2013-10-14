# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: devel/libdatrie/Makefile 328839 2013-09-30 18:20:59Z marino $

PORTNAME=	libdatrie
PORTVERSION=	0.2.6
CATEGORIES=	devel
MASTER_SITES=	http://linux.thai.net/pub/thailinux/software/libthai/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Double-array trie implementation library

LICENSE=	LGPL21

USE_XZ=		yes
GNU_CONFIGURE=	yes
USES=		iconv pathfix
USE_LDCONFIG=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${ICONV_LIB}

MAN1=		trietool-0.2.1
PORTDOCS=	README.migration

NO_STAGE=	yes
.include <bsd.port.mk>
