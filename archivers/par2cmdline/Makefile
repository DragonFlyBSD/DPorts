# Created by: Chris Larsen <darth@vader.dk>
# $FreeBSD: archivers/par2cmdline/Makefile 327699 2013-09-20 13:11:20Z bapt $

PORTNAME=	par2cmdline
PORTVERSION=	0.4
PORTREVISION=	4
CATEGORIES=	archivers
MASTER_SITES=	SF/parchive/${PORTNAME}/${PORTVERSION}

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	Tools for using Parity v2 Archive files

LICENSE=	GPLv2

NO_STAGE=	yes
GNU_CONFIGURE=	yes

PORTDOCS=	README
CONFLICTS=	par2cmdline-tbb-[0-9]*
PLIST_FILES=	bin/par2 bin/par2create bin/par2repair bin/par2verify

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/README ${DOCSDIR}/
.endif

.include <bsd.port.mk>
