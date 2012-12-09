# New ports collection makefile for:	CKEditor
# Date created:		2010/09/04
# Whom:			Joe Horn <joehorn@gmail.com>
#
# $FreeBSD: ports/www/ckeditor/Makefile,v 1.3 2012/11/17 06:02:30 svnexp Exp $
#

PORTNAME=	CKEditor
PORTVERSION=	3.6
CATEGORIES=	www
MASTER_SITES=	http://download.cksource.com/${PORTNAME}/${PORTNAME}/${PORTNAME}%20${PORTVERSION}/
DISTNAME=	ckeditor_${PORTVERSION}

MAINTAINER=	joehorn@gmail.com
COMMENT=	CKEditor is a WYSIWYG editor to be used inside web page

LICENSE=	MPL

NO_BUILD=	yes
WRKSRC=		${WRKDIR}/ckeditor

do-install:
	@${INSTALL} -d -m 0755 ${WWWDIR}
	@(cd ${WRKSRC} && ${FIND} . | ${CPIO} -pdmu -R${WWWOWN}:${WWWGRP} ${WWWDIR})

.include <bsd.port.mk>
