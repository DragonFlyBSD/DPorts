# New ports collection makefile for:	disco
# Date created:				08.06.2003
# Whom:					Kirill Ponomarew <ponomarew@oberon.net>
#
# $FreeBSD: ports/net-mgmt/disco/Makefile,v 1.18 2012/11/17 06:00:31 svnexp Exp $
#

PORTNAME=	disco
PORTVERSION=	1.2
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	SF/${PORTNAME}ipd/DISCO/${PORTNAME}-${PORTVERSION}.tar.gz

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	IP discovery and fingerprinting utility

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include

WRKSRC=		${WRKDIR}/${PORTNAME}

PORTDOCS=	README
PLIST_FILES=	bin/disco bin/disco.fp

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for i in README
	${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
