# Created by: ijliao
# $FreeBSD: misc/salias/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	salias
PORTVERSION=	0.3.1
PORTREVISION=	5
CATEGORIES=	misc
MASTER_SITES=	SF/${PORTNAME}/C%20${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	CLI tool to alias arguments of other programs

USES=		pkgconfig
USE_BZIP2=	yes
USE_GNOME=	glib20
GNU_CONFIGURE=	yes

MAN1=		salias.1
DOCS=		NEWS README

NO_STAGE=	yes
.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
post-install:
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
