# Created by: Manuel Giraud <manuel.giraud@gmail.com>
# $FreeBSD: devel/pcl/Makefile 340993 2014-01-25 07:46:02Z danfe $

PORTNAME=	pcl
PORTVERSION=	1.6
CATEGORIES=	devel
MASTER_SITES=	http://www.xmailserver.org/

MAINTAINER=	manuel.giraud@gmail.com
COMMENT=	Portable Coroutine Library

USES=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

WRKSRC=		${WRKDIR}/lib${PORTNAME}-${PORTVERSION}

post-patch:	# required at least on sparc64
	@${REINPLACE_CMD} -e '/<ucontext/ { x ; \
		s,.*,#include <inttypes.h>, ; G ; }' ${WRKSRC}/pcl/pcl.c

.include <bsd.port.mk>
