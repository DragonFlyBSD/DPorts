# Created by: ijliao
# $FreeBSD: textproc/ipdf/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ipdf
PORTVERSION=	1.0.0
PORTREVISION=	7
CATEGORIES=	textproc
MASTER_SITES=	http://hoopajoo.net/static/projects/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Creates indexed pdf documents from text files

LIB_DEPENDS=	pdf.6:${PORTSDIR}/print/pdflib \
		png15:${PORTSDIR}/graphics/png \
		tiff.4:${PORTSDIR}/graphics/tiff

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		ipdf.1
PLIST_FILES=	bin/ipdf

NO_STAGE=	yes
.include <bsd.port.mk>
