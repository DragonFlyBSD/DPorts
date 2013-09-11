# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: x11/fluxbg/Makefile 326494 2013-09-06 13:01:53Z bapt $

PORTNAME=	fluxbg
PORTVERSION=	0.7
PORTREVISION=	12
CATEGORIES=	x11
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Background changer for fluxbox/blackbox

LIB_DEPENDS=	gtkmm-2.0:${PORTSDIR}/x11-toolkits/gtkmm20

GNU_CONFIGURE=	yes
USES=	pathfix pkgconfig

.include <bsd.port.pre.mk>

.if !exists(${LOCALBASE}/bin/fbsetbg)
RUN_DEPENDS=	fbsetbg:${PORTSDIR}/x11-wm/fluxbox
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g ; \
		s|/usr/X11R6|${LOCALBASE}|g' ${WRKSRC}/src/fluxbg_conf.cc

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.post.mk>
