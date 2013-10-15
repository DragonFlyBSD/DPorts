# Created by: Alejandro Pulver <alejandro@varnet.biz>
# $FreeBSD: graphics/xmms-scivi/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	scivi
DISTVERSION=	0.2.0-rc3
PORTREVISION=	5
CATEGORIES=	graphics
MASTER_SITES=	SF/xmms-${PORTNAME}/${PORTNAME}/0.2.0-rc3
PKGNAMEPREFIX=	xmms-

MAINTAINER=	c.petrik.sosa@gmail.com
COMMENT=	Scivi is a visualization plugin for XMMS

LIB_DEPENDS=	xmms.4:${PORTSDIR}/multimedia/xmms

USE_BZIP2=	yes
USE_GL=		yes
USE_XORG=	x11 xt
USE_GNOME=	gtk12
GNU_CONFIGURE=	yes

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|echo aout|echo elf|' ${WRKSRC}/configure

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
