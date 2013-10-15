# Created by: Philippe Casidy <pcasidy@casidy.com>
# $FreeBSD: archivers/mtf/Makefile 327699 2013-09-20 13:11:20Z bapt $

PORTNAME=	mtf
PORTVERSION=	0.2.1
PORTREVISION=	1
CATEGORIES=	archivers
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	system/backup
EXTRACT_SUFX=	.tgz

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	Unix reader for the Microsoft Tape Format used by NT Backup

LICENSE=	GPLv2

ALL_TARGET=	# empty
NO_STAGE=	yes
PLIST_FILES=	bin/mtf
PORTDOCS=	README

post-patch:
	@${REINPLACE_CMD} -e "s|CC=|CC?=|" -e "s|CFLAGS=|CFLAGS?=|" \
		${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mtf ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
