# New ports collection makefile for:	mutt_vc_query
# Date created:				14 May 2003
# Whom:	      				Oliver Braun
#
# $FreeBSD: ports/mail/mutt_vc_query/Makefile,v 1.9 2012/11/17 05:59:07 svnexp Exp $
#

PORTNAME=	mutt_vc_query
PORTVERSION=	002
CATEGORIES=	mail
MASTER_SITES=	SF/rolo/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A vCard query utility for mutt

RUN_DEPENDS=	${LOCALBASE}/lib/libvc.so:${PORTSDIR}/devel/libvc
BUILD_DEPENDS:=	${RUN_DEPENDS}

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
CFLAGS+=	-I${PREFIX}/include \
		-L${PREFIX}/lib

MAN1=		mutt_vc_query.1

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
.for DOC in AUTHORS ChangeLog NEWS README THANKS
	@${INSTALL_DATA} ${WRKSRC}/${DOC} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
