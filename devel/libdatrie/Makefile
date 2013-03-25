# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: devel/libdatrie/Makefile 314640 2013-03-19 13:04:30Z eadler $

PORTNAME=	libdatrie
PORTVERSION=	0.2.6
CATEGORIES=	devel
MASTER_SITES=	http://linux.thai.net/pub/thailinux/software/libthai/

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Double-array trie implementation library

LICENSE=	LGPL21

USE_XZ=		yes
GNU_CONFIGURE=	yes
USES=	pathfix
USE_ICONV=	yes
USE_LDCONFIG=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		trietool-0.2.1
PORTDOCS=	README.migration

.include <bsd.port.mk>
