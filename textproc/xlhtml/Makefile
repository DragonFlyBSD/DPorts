# New ports collection makefile for:	xlhtml
# Date created:				27 March 2000
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/textproc/xlhtml/Makefile,v 1.34 2012/11/17 06:02:25 svnexp Exp $
#

PORTNAME=	xlhtml
PORTVERSION=	0.5
PORTREVISION=	4
PORTEPOCH=	1
CATEGORIES=	textproc
MASTER_SITES=	SF/chicago/${PORTNAME}/backend
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convert Excel and PowerPoint files to HTML and text

USE_GMAKE=	yes
USE_AUTOTOOLS=	automake14 autoconf
CONFIGURE_ARGS=	--mandir=${PREFIX}/man

MAN1=		ppthtml.1 xlhtml.1

.if !defined(NOPORTDOCS)
post-install:
.for dir in xlhtml ppthtml
	@${MKDIR} ${DOCSDIR}/${dir}
	cd ${WRKSRC}/${dir} && \
		${INSTALL_DATA} ChangeLog README THANKS ${DOCSDIR}/${dir}
.endfor
.endif

.include <bsd.port.mk>
