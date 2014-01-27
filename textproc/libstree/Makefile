# Created by: clsung
# $FreeBSD: textproc/libstree/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libstree
PORTVERSION=	0.4.2
CATEGORIES=	textproc
MASTER_SITES=	http://www.icir.org/christian/downloads/

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	A Generic Suffix Tree Library

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's,^\(SUBDIRS = src test\) docs,\1,' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
