# Ports collection makefile for:	libstree
# Date created:			Thu Mar  2 08:50:15 CST 2006
# Whom:				clsung
#
# $FreeBSD: ports/textproc/libstree/Makefile,v 1.7 2012/11/17 06:02:01 svnexp Exp $
#

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

post-patch:
	@${REINPLACE_CMD} -e 's,^\(SUBDIRS = src test\) docs,\1,' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
