# New ports collection makefile for:	libytnef
# Date created:		21 Feb 2005
# Whom:			Rodrigo Graeff <delphus@gmail.com>
#
# $FreeBSD: ports/devel/libytnef/Makefile,v 1.10 2012/11/17 05:55:57 svnexp Exp $
#

PORTNAME=	libytnef
PORTVERSION=	1.5
PORTREVISION=	2
CATEGORIES=	devel mail
MASTER_SITES=	SF/ytnef/${PORTNAME}/${PORTVERSION}

MAINTAINER=	delphus@gmail.com
COMMENT=	Unpack data in MS Outlook TNEF format

GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes

PORTDOCS=	AUTHORS NEWS README

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
