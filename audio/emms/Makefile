# Created by: Dryice Liu <dryice@dryice.name>
# $FreeBSD: audio/emms/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	emms
PORTVERSION=	3.0
PORTREVISION=	13
CATEGORIES=	audio elisp
MASTER_SITES=	GNU

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The Emacs Multi-Media System

LICENSE=	GPLv3

USES=		gmake
NO_STAGE=	yes
USE_EMACS=	yes
MAKE_ENV+=	PREFIX=${PREFIX} LOCALBASE=${LOCALBASE} \
		EMACS_SITE_LISPDIR=${EMACS_SITE_LISPDIR}
INFO=		emms
MAN1=		emms-print-metadata.1

.include <bsd.port.pre.mk>

.if ${EMACS_PORT_NAME} != "emacs23"
PORTNAMESUFFIX=	${PKGNAMESUFFIX}
.endif

.include <bsd.port.post.mk>
