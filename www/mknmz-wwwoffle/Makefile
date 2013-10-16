# Created by: Andrey Slusar <anray@FreeBSD.org>
# $FreeBSD: www/mknmz-wwwoffle/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	mknmz-wwwoffle
PORTVERSION=	0.7.2
PORTREVISION=	1
CATEGORIES=	www databases textproc
MASTER_SITES=	http://www.naney.org/comp/distrib/mknmz-wwwoffle/archive/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	WWWOFFLE cache indexer for full-text search system Namazu

RUN_DEPENDS=	${LOCALBASE}/bin/wwwoffle:${PORTSDIR}/www/wwwoffle
BUILD_DEPENDS=	${LOCALBASE}/bin/mknmz:${PORTSDIR}/databases/namazu2

USES=		perl5
HAS_CONFIGURE=	yes

MAN1=		mknmz-wwwoffle.1
PORTDOCS=	AUTHORS COPYING INSTALL INSTALL.ja NEWS README README.ja THANKS

NO_STAGE=	yes
post-build:
.if !defined(NOPORTDOCS)
post-install:
	${MKDIR} ${DOCSDIR}
.for a in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${a} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
