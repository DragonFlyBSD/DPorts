# New ports collection makefile for:	kxmleditor
# Date created:		15 July 2001
# Whom:			Kevin Lo <kevlo@FreeBSD.org>
#
# $FreeBSD: ports/editors/kxmleditor/Makefile,v 1.32 2012/11/17 05:57:14 svnexp Exp $
#

PORTNAME=	kxmleditor
PORTVERSION=	1.1.4
PORTREVISION=	9
CATEGORIES=	editors kde
MASTER_SITES=	SF/${PORTNAME}/KXMLEditor/${PORTVERSION}

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	XML editor for KDE

USE_KDELIBS_VER=3
USE_AUTOTOOLS=	libtool
USE_GMAKE=	yes
USE_LDCONFIG=	yes

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|-O2||g' -e "s,-lpthread,${PTHREAD_LIBS},g" \
	${WRKSRC}/${CONFIGURE_SCRIPT}

.if ${ARCH} == "ia64"
BROKEN=	Does not compile on ia64
.endif

.include <bsd.port.post.mk>
