# Created by: Ganael Laplanche <ganael.laplanche@martymac.org>
# $FreeBSD: sysutils/fpart/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	fpart
PORTVERSION=	0.9
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION} \
		http://contribs.martymac.org/fpart/

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	Sort and pack files into partitions

LICENSE=	BSD

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-embfts

MANCOMPRESSED=	no
MAN1=		fpart.1
PLIST_FILES=	bin/fpart
PORTDOCS=	Changelog README TODO

NO_STAGE=	yes
.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
.for doc in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${doc} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
