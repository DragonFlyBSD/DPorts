# Created by: Oliver Braun
# $FreeBSD: devel/libvc/Makefile 313635 2013-03-08 11:32:11Z bapt $

PORTNAME=	libvc
PORTVERSION=	003
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	SF/rolo/${PORTNAME}/${PORTVERSION}

MAINTAINER=	jgh@FreeBSD.org
COMMENT=	vCard library

USE_AUTOTOOLS=	libtool
USE_BZIP2=	yes
USES=		bison
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
