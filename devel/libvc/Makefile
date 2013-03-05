# Created by: Oliver Braun
# $FreeBSD: ports/devel/libvc/Makefile,v 1.15 2013/01/08 22:55:07 svnexp Exp $

PORTNAME=	libvc
PORTVERSION=	003
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	SF/rolo/${PORTNAME}/${PORTVERSION}

MAINTAINER=	jgh@FreeBSD.org
COMMENT=	vCard library

USE_AUTOTOOLS=	libtool
USE_BZIP2=	yes
USE_BISON=	build
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

MAN3=		vc.3
PLIST_FILES=	lib/libvc.a \
		lib/libvc.so \
		lib/libvc.so.0 \
		include/vc.h
PORTDOCS=	*

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
.for DOC in AUTHORS ChangeLog NEWS README THANKS doc/rfc2426.txt
	${INSTALL_DATA} ${WRKSRC}/${DOC} ${DOCSDIR}
.endfor
.endif
	@${RM} -f ${PREFIX}/lib/libvc.la

.include <bsd.port.mk>
