# Ports collection makefile for:  pixilate
# Date created:			  Wed Apr 30 06:10:16 PDT 2003
# Whom:				  Barry Irwin <bvi@moria.org>
#
# $FreeBSD: ports/net-mgmt/pixilate/Makefile,v 1.27 2012/11/17 06:00:36 svnexp Exp $

PORTNAME=	pixilate
PORTVERSION=	0.4.2
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	SF/winfingerprint/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Generates packets to match a list of Cisco PIX access lists

BUILD_DEPENDS=	${LIBNET_CONFIG}:${PORTSDIR}/net/libnet

WRKSRC=		${WRKDIR}/pixilate

USE_AUTOTOOLS=	aclocal autoconf automake libtool
AUTOMAKE_ARGS=	--add-missing

MAN1=		pixilate.1

PORTDOCS=	README
PLIST_FILES=	bin/pixilate

LIBNET_CONFIG?=	${LOCALBASE}/bin/libnet11-config

post-patch:
	@${REINPLACE_CMD} -e \
		's|libnet-config|${LIBNET_CONFIG}|; \
		 s|--defines`|& `${LIBNET_CONFIG} --cflags`|' \
		${WRKSRC}/configure.ac

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for i in README
	${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
