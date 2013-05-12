# Created by:			Jean-Yves Lefort <jylefort@brutele.be>
# $FreeBSD: ports/mail/gkrellmmailwatch2/Makefile,v 1.21 2012/11/17 05:59:03 svnexp Exp $

PORTNAME=	gkrellmmailwatch
PORTVERSION=	2.4.3
PORTREVISION=	10
CATEGORIES=	mail
MASTER_SITES=	http://gkrellm.luon.net/files/
DISTNAME=	gkrellm-mailwatch-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GKrellM mailwatch plugin

LATEST_LINK=	gkrellmmailwatch2

BUILD_DEPENDS=	${LOCALBASE}/include/gkrellm2/gkrellm.h:${PORTSDIR}/sysutils/gkrellm2
RUN_DEPENDS=	gkrellm:${PORTSDIR}/sysutils/gkrellm2

WRKSRC=		${WRKDIR}/gkrellm-mailwatch

USE_GMAKE=	yes
USE_LDCONFIG=	yes

MAKE_ENV+=	PLUGIN_DIR=${PREFIX}/libexec/gkrellm2/plugins

.include <bsd.port.mk>
