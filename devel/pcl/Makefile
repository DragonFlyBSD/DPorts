# New ports collection makefile for: pcl
# Date Created:                      13 Oct 2008
# Whom:                              Manuel Giraud <manuel.giraud@gmail.com>
#
# $FreeBSD: ports/devel/pcl/Makefile,v 1.4 2012/11/17 05:56:37 svnexp Exp $
#

PORTNAME=	pcl
PORTVERSION=	1.6
CATEGORIES=	devel
MASTER_SITES=	http://www.xmailserver.org/

MAINTAINER=	manuel.giraud@gmail.com
COMMENT=	Portable Coroutine Library

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

MAN3=		pcl.3

WRKSRC=		${WRKDIR}/lib${PORTNAME}-${PORTVERSION}

.include <bsd.port.pre.mk>

.if ${ARCH} == "sparc64"
BROKEN=		Does not compile on sparc64
.endif

.include <bsd.port.post.mk>
