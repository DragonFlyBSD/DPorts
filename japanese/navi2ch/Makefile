# New ports collection makefile for:	navi2ch for Emacsen
# Date created:		13 May 2001
# Whom:			FUJISHIMA Satsuki <sf@FreeBSD.org>
#
# $FreeBSD: ports/japanese/navi2ch/Makefile,v 1.21 2012/11/17 05:58:37 svnexp Exp $
#

PORTNAME=	navi2ch
PORTVERSION=	1.8.4
PORTREVISION=	3
PORTEPOCH=	1
CATEGORIES=	japanese www elisp
MASTER_SITES=	SF
MASTER_SITE_SUBDIR=	${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
PKGNAMESUFFIX=	-${EMACS_PORT_NAME}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	2ch.net and 2ch-like BBS navigator for Emacsen

USE_EMACS=	yes
INFO=		navi2ch
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	EMACS="${EMACS_CMD}"
CONFIGURE_ARGS=	--with-lispdir=${PREFIX}/${LISPDIR}/${PORTNAME}
PORTDOCS=	${PORTDOC_FILES} contrib
PLIST_SUB=	LISPDIR=${LISPDIR}

PORTDOC_FILES=	ChangeLog README TODO
PORTDOC_LISPS=	gikope.el navi2ch-logo.el navi2ch-migemo.el

.include <bsd.port.pre.mk>

.if ${EMACS_PORT_NAME} == xemacs21-mule
LISPDIR=	${EMACS_SITE_LISPDIR}
PLIST_SUB+=	FSF="@comment "
.else
LISPDIR=	${EMACS_VERSION_SITE_LISPDIR}
PLIST_SUB+=	FSF=""
.if !defined(WITHOUT_X11)
RUN_DEPENDS=	${LOCALBASE}/lib/X11/fonts/local/monak12.pcf.gz:${PORTSDIR}/japanese/monafonts
.endif
.endif

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && \
		${INSTALL_DATA} ${PORTDOC_FILES} ${DOCSDIR}
	@${MKDIR} ${DOCSDIR}/contrib
	cd ${WRKSRC}/contrib && \
		${INSTALL_DATA} ${PORTDOC_LISPS} ${DOCSDIR}/contrib
.endif

.include <bsd.port.post.mk>
