# Created by: Oliver Braun
# $FreeBSD: ports/mail/mutt_vc_query/Makefile,v 1.10 2013/01/08 22:51:00 svnexp Exp $

PORTNAME=	mutt_vc_query
PORTVERSION=	002
CATEGORIES=	mail
MASTER_SITES=	SF/rolo/${PORTNAME}/${PORTVERSION}

MAINTAINER=	jgh@FreeBSD.org
COMMENT=	vCard query utility for mutt

RUN_DEPENDS=	libvc>=003:${PORTSDIR}/devel/libvc
BUILD_DEPENDS:=	${RUN_DEPENDS}

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
CFLAGS+=	-I${PREFIX}/include \
		-L${PREFIX}/lib

MAN1=		mutt_vc_query.1
PORTDOCS=	*
PLIST_FILES=	bin/mutt_vc_query

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
post-install:
	@${MKDIR} ${DOCSDIR}
.for DOC in AUTHORS ChangeLog NEWS README THANKS
	${INSTALL_DATA} ${WRKSRC}/${DOC} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
